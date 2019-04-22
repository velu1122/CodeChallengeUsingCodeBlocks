/***********************************************************
* Filename			: PhoneExtension.cpp
* Purpose			: Defines PhoneExtension Class and Show data for PhoneExtension.
* Platform			: Windows, CodeBlocks & Microsoft Visual Studio 2008
					  Derived Class from PhoneDirectory Base class
* Author(s)			: Velmurugan
* e-mail			: velu1122@gmail.com
* Creation date		: Apr 22 2019
* Modified By		:
*			Modification description(s)
***********************************************************/
#include "PhoneExtension.h"

PhoneExtension::PhoneExtension(unsigned int Code=0,unsigned long sevenDigit=0):areaCode(Code),sevenDigitNumber(sevenDigit)
{
    //constructor
}

PhoneExtension::~PhoneExtension()
{
    //destructor
}

void PhoneExtension::showData()
{
    std::cout << "Phone extension (" << areaCode << ") " << sevenDigitNumber << "\n";
}
