/***********************************************************
* Filename			: Age.cpp
* Purpose			: Defines Age Class and Show data for Age.
* Platform			: Windows, CodeBlocks, Microsoft Visual Studio 2008
					  Derived Class from PhoneDirectory Base class
* Author(s)			: Velmurugan
* e-mail			: velu1122@gmail.com
* Creation date		: Apr 22 2019
* Modified By		:
*			Modification description(s)
***********************************************************/
#include "Age.h"

Age::Age(unsigned int age=0):ageYears(age)
{
    //constructor
}

Age::~Age()
{
    //destructor
}
void Age::showData()
{
    std::cout << "Age " << ageYears << "\n";
}
