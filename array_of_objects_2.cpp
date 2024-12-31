#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;
class student {
    private:
    char name[15];
    int id ;
    public:
    student(){
        cout<<"empty constructor\n";
        strcpy(name,"NO Name");
        id =0;
    }
    student(char n[],int i)
    {
        strcpy(name,n);
        id=i;
    }
    void info()
    {
        printf("%s   ",name);
        printf("%d   \n",id);
    }

};
int main() {
    student s1,s2; //empty constructor empty constructor
    s1.info();//NO Name   0
    s2.info();//NO Name   0
    
    student arr[3];
    student arr2[3]={student("body",111),
    student("body2",222),
    student("body3",333)};
    for (student a :arr2)
    {
        a.info();
    }
    //another way to iterate on array of objects
    cout<<"----another way to iterate on array of objects------\n";
    for (int i=0 ;i<sizeof(arr2)/sizeof(student);i++)
    {
        arr2[i].info();
    }

    student myStudent1("adel",5555),myStudent2("nasim",6666);
    //next line must be in same line 
    student arr3[3]={myStudent1,myStudent2,myStudent1};
    /*
    student arr3[3];
    arr3[3]={myStudent1,myStudent1,myStudent1};
    will lead to error
    */
       cout<<"----print my array after passing objects to array------\n";

    for (int i=0 ;i<sizeof(arr3)/sizeof(student);i++)
    {
        arr3[i].info();
    }
    student *p;
    p=&arr3[0]; // or simply p=arr
    cout<<"----print my array using pointer------\n";

    for (int i=0 ;i<sizeof(arr3)/sizeof(student);i++)
    {
        // cout<<*(p+i); //error
        (p+i)->info();
    }

    return 0;

}
