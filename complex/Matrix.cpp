#include "Matrix.h"

Matrix::Matrix(int col, int row) //col - количество столбцов, row - количество строк
{
	this->col = col;
	this->row = row;
	data = new float*[row];
	for (int i = 0; i < row; i++)
	{
		data[i] = new float[col];
	} // data[y][x];
}

Matrix::~Matrix() //col - количество столбцов, row - количество строк
{
	for (int i = 0; i < row; i++)
	{
		delete[] data[i];
	}
	delete[] data;	
}

