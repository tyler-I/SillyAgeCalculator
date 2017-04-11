/*
*	Tyler Ingham
*	4/10/2017
*	Copywrite 2017 Tyler Ingham
*	//MIT Licnese//
*	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), 
*	to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
*	and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
*	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
*	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
*	DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE 
*	USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

#include <string>		//string for name
#include <iostream>		//cout, cin, endl
#include <cmath>		//pow

class AgeCalculator
{

private:
	//Constants
	const double SCALE_FACTOR = 8.6475;
	const double POW_FACTOR = 2.065;

	//Name and age variables
	std::string m_name = "";
	double m_age = 0.0;

public:
	//Gets the name from the user, stores it in m_name
	void GetName();
	//Calculates the age for the user using SCALE_FACTOR and POW_FACTOR
	void CalculateAge();
	//Prints the name and age of the user to the console window
	void Print() const;

};