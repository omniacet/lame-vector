#include "Vector.h"
#include <fstream>

int main()
{
	//1+1
	ofstream of("test.txt");
	Vector b(2, 0);
	of << b << b << b << b << b;
	of.close();
	

	return 0;
}