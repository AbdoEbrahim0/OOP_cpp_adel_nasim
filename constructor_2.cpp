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
    int id;

public:
student()
{
    strcpy(name,"null");
    id=0;
    cout<<name<<endl;
    cout<<id<<endl;
}

student(char n[15],int idd=2)
:id{idd}
{
strcpy(name,n);
}
void setName(char n[])
{
strcpy(name, n) ;
}
void set_id(int d)
{
    id=d;
}
char* getName()
{
return name;
}

int getId()
{
    return id;
}
void printInfo()
{
    cout<<"name : "<<name<<endl;
    
    cout<<"ID : "<<id<<endl;
}
void printInfo2()
{
    cout<<"name : "<<getName()<<endl;
    
    cout<<"ID : "<<getId()<<endl;
}
};

int main() {
    student s1,s2("ahmed",1),s3("abdo");
    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    
    return 0;

}
