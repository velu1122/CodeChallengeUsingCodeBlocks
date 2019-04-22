#ifndef PHONEEXTENSION_H
#define PHONEEXTENSION_H

#include "PhoneDirectory.h"

class PhoneExtension:public PhoneDirectory
{
    public:
        PhoneExtension(unsigned int,unsigned long);
        virtual ~PhoneExtension();
        //unsigned int getAreaCode();
        //unsigned long getSevenDigitNumber();
        void showData();

    private:
        unsigned int areaCode;
        unsigned long sevenDigitNumber;
};

#endif // PHONEEXTENSION_H
