#ifndef HOUSENUMBER_H
#define HOUSENUMBER_H

//#include "IdentityDetails.h"
#include "PhoneDirectory.h"

class HouseNumber:public PhoneDirectory
{
    public:
        HouseNumber(unsigned long);
        virtual ~HouseNumber();
        void showData();

    private:
        unsigned long houseNumber;
};

#endif // HOUSENUMBER_H
