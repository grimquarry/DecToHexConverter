/**
    Math/DecToHexConverter
    testDriver.cpp
    Purpose: A driver program for testing DecToHex objects for converting decimal integers to hexidecimal strings
    @author Jeremiah Kellogg
    @version 1.0.0 2020-06-14
*/
#include <iostream>
#include <string>
#include "DecToHex.h"

int main()
{
	DecToHex decToHexCalc;

	std::string testResult = decToHexCalc.ConvertToHex(123);

	std::cout << testResult << std::endl;

	return 0;
}
