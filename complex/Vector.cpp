#include "Vector.h"

Vector::Vector(int dim, float def) //Конструктор (размерность, значение по умолчанию)
{
	dimension = dim;
	data = new float[dim];
	for (int i = 0; i < dim; i++)
	{
		data[i] = def;
	}
}

Vector::~Vector() // Деструктор (метод, который вызывается перед удалением объекта)
{
	cout << endl << "Deleted vector object" << endl;
	delete[] data;
}
Vector Vector::operator+(const Vector& other)
{
	Vector v(dimension, 0);
	for (int i = 0; i < dimension; i++)
	{
		v.data[i] = data[i] + other.data[i];
	}
	return v;
}
Vector Vector::operator-(const Vector& other)
{
	Vector v(dimension, 0);
	for (int i = 0; i < dimension; i++)
	{
		v.data[i] = data[i] - other.data[i];
	}
	return v;
}
Vector Vector::operator*(float other)
{
	Vector o(dimension, 0);
	for (int i = 0; i < dimension; i++)
	{
		o.data[i] = data[i] * other; 
	}
	return o;
}
float Vector::operator*(const Vector& other)
{
	float sum = 0;
	for (int i = 0; i < dimension; i++)
	{
		sum += data[i] * other.data[i];
	}
	return sum;
}

float& Vector::operator[](int i) // Оператор доступа к данным
{
	return data[i];
}

Vector operator*(float re, Vector& c)
{
	return c * re;
}
int Vector::getDimension()
{
	return dimension;
}
istream& operator>>(istream& is, Vector& c)
{
	for (int i = 0; i < c.getDimension(); i++)
	{
		is >> c[i];
	}
	return is;
}
ostream& operator<<(ostream& os, Vector& c)
{
	os << "(";
	for (int i = 0; i < c.getDimension(); i++)
	{
		os << c[i];
		if (i != c.getDimension() - 1)
		{
			os << ",";
		}
		
	}
	os << ")";
	return os;
}