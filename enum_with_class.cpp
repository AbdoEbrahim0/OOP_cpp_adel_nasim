#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

enum days{sat=2,sun,mon,tue,wed,thur,fri};
string days_string[7]={"sat","sun","mon","tue","wed","thur","fri"};
/*
1st val in enum = always 0 
can change it by intialize it
elements inside enum can not be modify or enter by user  
*/
class week{
private :
enum days d[7];
public:
void setday(days d_passed[])
{
    for(int i=0;i<7;i++)
    {
        d[i]=d_passed[i];
    }
}
void printInfo()
{
    for(int i=0;i<7;i++)
    cout<< days_string[i]<<" num is ="<<d[i]<<endl;

}
};
int main() { 
    days d_main[7]={sat,sun,mon,tue,wed,thur,fri};
    week w1;
    w1.setday(d_main);
    w1.printInfo();

    // cout<< sat<< " "<<sun<< " "<<mon<< " "<<tue<< " "<<
    // wed<< " "<<thur<< " "<<fri<< " ";
    // cout<<"\n------"<<endl;
    // days d[]={sat,sun,mon,tue,wed,thur,fri};
    // for (int i=0;i<sizeof(d)/sizeof(days);i++)
    // {
    // cout<<d[i]<<" ";    
    // }
    // cout<<"\n------"<<endl;
    // for(days val :d)
    // {
    //     cout<<val<<" ";    
    // }    
    
    return 0;

}
