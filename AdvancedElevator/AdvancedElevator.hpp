#ifndef ADVANCEDELEVATOR_HPP
#define ADVANCEDELEVATOR_HPP
#include "elevator.hpp"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class AdvancedElevator:public elevator
{
    public:
        vector<int>cf;
        vector<int>pf;
        vector<int>mf;
        int totalpeople;
        int nowpeople;
        AdvancedElevator(int fr,int tp);
        void getfloorpreparation();
        void move_floor();
};
#endif // _ADVANCEDELEVATOR_HPP_
