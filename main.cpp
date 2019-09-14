/*
 * main.cpp
 *
 *  Created on: Sep 2, 2019
 *      Author: brandon
 */

#include "main.h"
#include <iostream>	//iostream is where std::cout and std::endl are defined
#include "myfunc.h"

int main()
{
	std::string a = myfunc();
	std::cout<< a <<std::endl;
	return 0;

}
