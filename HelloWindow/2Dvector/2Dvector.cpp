// 2Dvector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vector2D.h"
#include "dotProduct.h"

int main()
{
	Vector2D<float> car_velocity(4.0f, 3.0f);
	Vector2D<float> car_velocity2(5.0f, 2.0f);

	std::cout << "Velocity of a car is " << car_velocity << std::endl;
	std::cout << "Speed of this car is " << car_velocity.getMagnitude() << std::endl;

	std::cout << "Direction of this car's velocity is " <<
		car_velocity.getNormalized() << std::endl;

	std::cout << "dotProduct : " << dotProduct(car_velocity, car_velocity2) << std::endl;

	/*Vector2D<float> my_float_vec(1.0f, 2.0f);
	Vector2D<double> my_double_vec(3.56, 4.78);
	Vector2D<int> my_int_vec(1.245f, 3.1231f);

	std::cout << my_float_vec << std::endl;
	std::cout << my_double_vec << std::endl;
	std::cout << my_int_vec << std::endl;*/

	return 0;
}


