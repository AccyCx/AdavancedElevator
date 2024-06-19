#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
using namespace std;
class person
{
    public:
        int Currentfloor;
        int Purposefloor;
        person();
        void putcf();
        void putpf();
        int getcf();
        int getpf();
        ~person(){};
};
#endif
