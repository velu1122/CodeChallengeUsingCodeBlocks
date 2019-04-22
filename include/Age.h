#ifndef AGE_H
#define AGE_H

#include "PhoneDirectory.h"

class Age:public PhoneDirectory
{
    public:
        Age(unsigned int);
        virtual ~Age();
        void showData();

    private:
        unsigned int ageYears;
};

#endif // AGE_H
