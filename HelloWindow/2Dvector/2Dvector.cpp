// 2Dvector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector2D.h"

int main()
{
	Vector2D<float> my_float_vec(1.0f, 2.0f);
	Vector2D<double> my_double_vec(3.56, 4.78);
	Vector2D<int> my_int_vec(1.245f, 3.1231f);

	std::cout << my_float_vec << std::endl;
	std::cout << my_double_vec << std::endl;
	std::cout << my_int_vec << std::endl;

	return 0;
}


