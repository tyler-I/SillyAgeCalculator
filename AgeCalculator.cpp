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

#include "AgeCalculator.h"

/*
*	Purpose: Prompts the user for his or her full name and then stores the name in a string m_name
*	Pre: Assumes m_name is empty and input will be valid
*	Post: m_name will hold the string value of the user's name
*/
void AgeCalculator::GetName()
{
	std::cout << "Enter your full name:  ";
	std::getline(std::cin, m_name);
}

/*
*	Purpose: Calculates the age for the user and sets m_age to calculated value
*	Pre: Assumes m_age is empty
*	Post: m_age will have value of the calculated age
*/
void AgeCalculator::CalculateAge()
{
	m_age = (pow((m_name.length() * SCALE_FACTOR), POW_FACTOR)) / m_name.length();
}

/*
*	Purpose: Prints the name and age of the user
*	Pre: None
*	Post: m_name and m_age are unchanged
*/
void AgeCalculator::Print() const
{
	std::cout << "Your name is: " << m_name << std::endl;
	std::cout << "And you are " << m_age << " years old!" << std::endl;
}