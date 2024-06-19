#include "person.hpp"
person::person(){};
void person::putcf()
            {
            cin>>Currentfloor;
            };
void person::putpf()
            {
            cin>>Purposefloor;
            };
int person::getcf()
            {
            return Currentfloor;
            };
int person::getpf()
            {
            return Purposefloor;
            };
