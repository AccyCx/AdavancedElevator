#include "elevator.hpp"
void elevator::moveFloor(int floornumber)
{
    if(floornumber>currentfloor)
    {
        for(int i=currentfloor;i<floornumber;i++)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
                cout<<"----"<<i<<"----"<<endl<<endl,Sleep(2000);
            }
    }
    else if(floornumber<currentfloor)
    {
        for(int i=currentfloor;i>floornumber;i--)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
                cout<<"----"<<i<<"----"<<endl<<endl,Sleep(2000);
            }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_BLUE);
    cout<<"The "<<floornumber<<" floor is arrived"<<endl;
    currentfloor=floornumber;
}
elevator::elevator(int floor)
{
    currentfloor=1;
}
void elevator::set_up(int upnumber)
{
    if(upnumber>=1&&upnumber<=floor)
    {
        if(upnumber>=currentfloor)
            moveFloor(upnumber);
        else
            cout<<"You can't do this... "<<endl;
    }
    else
        cout<<"The floor is not exist..."<<endl;
}
void elevator::set_down(int downnumber)
{
    if(downnumber>=1&&downnumber<=floor)
    {
        if(downnumber<=currentfloor)
            moveFloor(downnumber);
        else
            cout<<"You can't do this..."<<endl;
    }
    else
        cout<<"The floor is not exist..."<<endl;
}
int elevator::display_floor()
{
    return currentfloor;
}

