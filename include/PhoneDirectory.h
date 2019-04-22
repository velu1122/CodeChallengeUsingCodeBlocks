#ifndef PHONEDIRECTORY_H
#define PHONEDIRECTORY_H

#include <iostream>

class PhoneDirectory
{
    public:
        PhoneDirectory();
        virtual ~PhoneDirectory();
        virtual void showData()=0;
};

#endif // PHONEDIRECTORY_H
