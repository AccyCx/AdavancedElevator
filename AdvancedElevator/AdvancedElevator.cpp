#include "AdvancedElevator.hpp"
#include "person.hpp"
AdvancedElevator::AdvancedElevator(int fr,int tp):elevator(floor){
        nowpeople=0;
        currentfloor=1;
        floor=fr;
        totalpeople=tp;
        };
void AdvancedElevator::getfloorpreparation()
{
     for(int i=0;i<totalpeople;i++)
     {
         person p;
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
         cout<<"please input your current floor and purpose floor"<<endl;
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
         p.putcf();
         p.putpf();
         cf.push_back(p.getcf());
         pf.push_back(p.getpf());
         sort(cf.begin(),cf.end());
         sort(pf.begin(),pf.end());
     }
}
void AdvancedElevator::move_floor(){
    mf.push_back(1);
    for(int i=1;i<cf.size();i++)
    {
        if(cf[i]==cf[i-1])
            {
                continue;
            }
        else
            {
            mf.push_back(cf[i]);
            }
    }
    for(int i=0;i<pf.size();i++)
    {
        if(pf[i]==pf[i+1])
        {
            continue;
        }
        else
        {
            mf.push_back(pf[i]);
        }
    }
    sort(mf.begin(),mf.end());
    for(int i=0;i<mf.size();i++)
    {
        int x=0,y=0;
        if(mf[i]==mf[i+1])
        {
            continue;
        }
        else
        {
            set_up(mf[i]);
            for(int j=0;j<cf.size();j++)
            {
                if(cf[j]==mf[i])
                {
                    x++;
                }
            }
            for(int j=0;j<pf.size();j++)
            {
                if(pf[j]==mf[i])
                {
                    y++;
                }
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
            cout<<x<<" people is getting on"<<endl;
            cout<<y<<" people is arrived"<<endl;
        }
    }
};
