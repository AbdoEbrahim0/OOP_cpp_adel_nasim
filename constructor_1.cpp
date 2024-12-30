#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

class car {
private:
    char name[15];
    char model[10];
    int maxSpeed;

public:
car()
 :model{"2022"}
{
    
    strcpy(name,"ABCD");
    maxSpeed=2000;

}
car (int speed){
    maxSpeed=speed;
    cout<<"Speed intialized by : "<<maxSpeed<<endl;
}
car (char model[10],int speed)
// :model{"2077"}
{
    maxSpeed=speed;
    cout<<"Speed intialized by : "<<maxSpeed<<endl;
    cout<<"model intialized by : "<<model<<endl;
    
}
car (char m[10])
:name{"cyperPunk"},maxSpeed{1700}
{
    strcpy(model,m);
    cout<<"Speed intialized by : "<<maxSpeed<<endl;
    cout<<"model intialized by : "<<getModel()<<endl;
    cout<<"name intialized by : "<<name<<endl;
    
}
void setName(char n[])
{
strcpy(name, n) ;
}
void setModel(char m[])
{
strcpy(model, m) ;
}
void setSpeed(int x)
{
    maxSpeed=x;
}

char* getName()
{
return name;
}
char* getModel()
{
return model ;
}
int getSpeed()
{
    return maxSpeed;
}
void printInfo()
{
    cout<<"name : "<<name<<endl;
    cout<<"model : "<<model<<endl;
    cout<<"max speed : "<<maxSpeed<<endl;
}
void printInfo2()
{
    cout<<"name : "<<getName()<<endl;
    cout<<"model : "<<getModel()<<endl;
    cout<<"max speed : "<<getSpeed()<<endl;
}
};

int main() {
    car ob;
    ob.setName("kia");
    ob.setModel("2021");
    ob.setSpeed(50);
    cout<<"-------"<<endl;
    ob.printInfo();
    cout<<"-------"<<endl;
    ob.printInfo2();
    cout<<"-------"<<endl;
    car ob2(1500);
    cout<<"-------"<<endl;
    car ob3("2022",1500);
    cout<<"-------"<<endl;
    car ob4("2077");
    cout<<"-------"<<endl;
    return 0;

}
