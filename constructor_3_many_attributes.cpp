#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

class manyMembers{
private:
int a1,a2,a3,a4,a5,a6,a7,a8,a9;
public:
//constructor
manyMembers ( int aa1,int aa2,int aa3,int aa4,int aa5,int aa6,int aa7,int aa8,int aa9)
{
a1=aa1;
a2=aa2;
a3=aa3;
a4=aa4;
a5=aa5;
a6=aa6;
a7=aa7;
a8=aa8;
a9=aa9;
}
//another constructor but take object of class
manyMembers(const manyMembers &m )
{
    a1=m.a1;
a2=m.a2;
a3=m.a3;
a4=m.a4;
a5=m.a5;
a6=m.a6;
a7=m.a7;
a8=m.a8;
a9=m.a9;
}

void printInfo()
{
    cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "
    <<a6<<" "<<a7<<" "<<a8<<" "<<a9<<" ";
}

};
int main() {
    manyMembers m(10,20,30,40,50,60,70,80,90),m2(1,2,3,4,5,6,7,8,9);
    m.printInfo();

    manyMembers ob(m2);
    ob.printInfo();
    
    return 0;

}
