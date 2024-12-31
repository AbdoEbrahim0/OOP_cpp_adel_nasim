#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;


// void increment()
// {
//     static int x=0;
//     cout<<++x<<"\n";
// }

class student{
    private:
    static int count;// static can not initialize inside class
    char name[15];
    int first,second,final,total,id;
    public:
    
    student()
    {
        printf("constructor created\n");
        strcpy(name,"NO_Name");
        first=second=final=total=id=0;
        count++;
        // print_counter();
        cout<<"\n "<<first<<" "<<second<<" "<<
        final<<" "<<total<<" "<<id<<endl;
    
    } 
    static void print_counter() 
    //static is optional in fn as it only
    // make me use class instead of object
    {
        cout<<"inside static print_counter: "<<count<<endl;
    }

};//end of class we itialzie our static variable 
//normal data member can not be initialize outside class 
int student::count=0;
int main() {
    //  increment();//1
    //  increment();//2
    //  increment();//3
    cout<<"-----------ststic function usage---------\n";
    student::print_counter();
    student s1;
    s1.print_counter();
    student s2;
    s2.print_counter();
    student arr_of_students[3];
    arr_of_students->print_counter();
    cout<<"-----------ststic function usage---------\n";
    student::print_counter();
    return 0;

}
