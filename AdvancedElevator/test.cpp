#include "AdvancedElevator.hpp"
#include "elevator.hpp"
int main()
{

    printf("%s ",__DATE__);
    printf("%s\n",__TIME__);
    while(true)
    {
        AdvancedElevator h(15,6);
        cout<<"This elevator has "<<h.floor<<" floors."<<endl;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
        cout<<"---This elevator will get up from 1 floor---"<<endl;
        h.getfloorpreparation();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
        h.move_floor();
    }

}
