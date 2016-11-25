#pragma once //Подключение файла один раз
#include <iostream>
#include "Matrix.h"
using namespace std;
//https://github.com/lame-student/lame-vector
//Система контроля версий
//VCS
//Представители - git, hg, svn, csv
/* 
struct - ключевое слово
Vector - имя класса(структуры)
float re; - поля
void setRe(float re); - методы
*/
class Matrix;
//class - поля по умолчанию приватные (private)
//struct - поля по умолчанию публичные (public)
class Vector { //столбец
private:
	int dimension;//размерность
	float* data;
public:
	Vector(int dim, float def); //Конструктор (размерность / значение по умолчанию)
	~Vector(); // Деструктор (метод, который вызывается перед удалением объекта)
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector operator*(float other);
	float operator*(const Vector& other);
	int getDimension(); // Метод, возвращающий размерность объекта
	float& operator[](int); // Оператор доступа к данным
	Matrix operator*(Matrix&);
};

Vector operator*(float re, Vector& c);

istream& operator>>(istream& is, Vector& c);
ostream& operator<<(ostream& os, Vector& c);

