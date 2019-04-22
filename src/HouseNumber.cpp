/***********************************************************
* Filename			: HouseNumber.cpp
* Purpose			: Defines HouseNumber Class and Show data for HouseNumber.
					  Derived Class from PhoneDirectory Base class
* Platform			: Windows, CodeBlocks, Microsoft Visual Studio 2008
* Author(s)			: Velmurugan
* e-mail			: velu1122@gmail.com
* Creation date		: Apr 22 2019
* Modified By		:
*			Modification description(s)
***********************************************************/
#include "HouseNumber.h"

HouseNumber::HouseNumber(unsigned long house=0):houseNumber(house)
{
    //constructor
}

HouseNumber::~HouseNumber()
{
    //destructor
}

void HouseNumber::showData()
{
    std::cout << "House number " << houseNumber << "\n";
}
