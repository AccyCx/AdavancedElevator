#ifndef ELEVATOR_HPP
#define ELEVATOR_HPP
#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;
class elevator
{
    public:
        int floor;
        int currentfloor;
        void moveFloor(int floornumber);
        elevator(int floor);
        void set_up(int upnumber);
        void set_down(int downnumber);
        int display_floor();
};
#endif // _ELEVATOR_HPP_
