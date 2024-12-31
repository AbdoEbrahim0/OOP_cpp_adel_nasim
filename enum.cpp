#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

enum days{sat=2,sun,mon,tue,wed,thur,fri};
/*
1st val in enum = always 0 
can change it by intialize it
elements inside enum can not be modify or enter by user  
*/
int main() { 
    cout<< sat<< " "<<sun<< " "<<mon<< " "<<tue<< " "<<
    wed<< " "<<thur<< " "<<fri<< " ";
    cout<<"\n------"<<endl;
    days d[]={sat,sun,mon,tue,wed,thur,fri};
    for (int i=0;i<sizeof(d)/sizeof(days);i++)
    {
    cout<<d[i]<<" ";    
    }
    cout<<"\n------"<<endl;
    for(days val :d)
    {
        cout<<val<<" ";    
    }    
    
    return 0;

}
