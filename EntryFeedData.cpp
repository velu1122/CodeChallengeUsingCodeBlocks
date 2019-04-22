/***********************************************************
* Filename			: EntryFeedData.cpp
* Purpose			: Defines the entry point for the console application.
* Platform			: Windows, CodeBlocks, Microsoft Visual Studio 2008
* Author(s)			: Velmurugan
* e-mail			: velu1122@gmail.com
* Creation date		: Apr 22 2019
* Modified By		:
*			Modification description(s)
***********************************************************/
#include <string>
#include <iostream>
#include <vector>
#include <memory>

#include "PhoneExtension.h"
#include "HouseNumber.h"
#include "Age.h"

int holdCommandWindow()
{
    std::string str;
    std::cout << "\nHit Enter To End Program ";
    std::getline(std::cin,str);
    return 0;
}

/*****************************************************************
* FUNCTION-NAME		: main
* PARAMETER			: None
* RETURN VALUE		: None
* DESCRIPTION		: Entry point for the app and feed Phone Directory items
* REMARKS			: unique pointer to deallocate the memory. Its supported from C++11 onwards.
                      Vector is used to add multiple objects at runtime
*****************************************************************/
int main()
{
       //Feed Data - with Unique pointer
#if 1  //make "1 --> 0(zero)" if older than C++11 compiler or Visual Studio 2008 or no Smart Pointer support
    std::unique_ptr<PhoneExtension> ph1(new PhoneExtension(313, 4567892));
    std::unique_ptr<PhoneExtension> ph2(new PhoneExtension(800, 3334455));

    std::unique_ptr<Age> age1(new Age(39));
    std::unique_ptr<Age> age2(new Age(21));

    std::unique_ptr<HouseNumber> hn1(new HouseNumber(44842));

    //Vectorization
    std::vector<std::unique_ptr<PhoneDirectory>> vectorData;
    vectorData.push_back(std::move(ph1));
    vectorData.push_back(std::move(ph2));
    vectorData.push_back(std::move(age1));
	vectorData.push_back(std::move(hn1));
    vectorData.push_back(std::move(age2));
    
    //Show data
    for(std::vector<std::unique_ptr<PhoneDirectory>>::iterator it = vectorData.begin(); it != vectorData.end(); ++it) {
        (*it)->showData();
    }
    //Clear Vector
    vectorData.erase(vectorData.begin(),vectorData.end());
#else
    /* Feed data - without Unique pointer*/
    PhoneExtension *ph1 = new PhoneExtension(313, 4567892);
    PhoneExtension *ph2 = new PhoneExtension(800, 3334455);

    Age *age1 = new Age(39);
    Age *age2= new Age(21);

    HouseNumber *hn1 = new HouseNumber(44842);
    
	//Vectorization
    std::vector<PhoneDirectory*> vectorData;
    vectorData.push_back(ph1);
    vectorData.push_back(ph2);
    vectorData.push_back(age1);
    vectorData.push_back(hn1);
	vectorData.push_back(age2);
    
	//Show data
    for(std::vector<PhoneDirectory*>::iterator it = vectorData.begin(); it != vectorData.end(); ++it) {
        (*it)->showData();
    }
	
	//Dellocate Memory
	for(unsigned int i = 0; i < vectorData.size(); ++i) {
        delete vectorData[i]; // Calls ~object and deallocates vectorData[i]
    }
	//Clear Vector
    vectorData.clear();
#endif

    return holdCommandWindow();
}
