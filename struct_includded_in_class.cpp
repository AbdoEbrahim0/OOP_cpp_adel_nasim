#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

// struct distance_
// {
//     float feet;
//     float inches;
// }x,y;

// distance_ addition(distance_ xx,distance_ yy)
// {
//   distance_ result;
//   result.feet=xx.feet+yy.feet;
//   result.inches=xx.inches+yy.inches;
//   return result;  
// }

struct exam
{
float fr_exam,s_exam,fi_exam;
}e{0,0,0};
class subject
{
    private:
    char name[15];
    public:
    subject(){};
    subject(char n[],float fr,float s,float fi)
    {
        strcpy(name,n);
        e.fr_exam=fr;
        e.s_exam=s;
        e.fi_exam=fi;
    }
    float total (exam ee)
    {
    return ee.fr_exam+ee.s_exam+ee.fi_exam;
    }
    void subjectInfo()
    {
        printf("name :%s\n",name);
        printf("first :%.3f\n",e.fr_exam);
        printf("second :%.3f\n",e.s_exam);
        printf("final :%.3f\n",e.fi_exam);
        printf("total :%.1f\n",total(e));
        
    }
};
int main() {
    // x.feet=10.5,x.inches=0.5;
    // y.feet=20.5,y.inches=4.5;
    // distance_ z;
    // z=addition(x,y);
    // cout<<z.feet<<" "<<z.inches<<endl;
    
    subject ob1("OOP",45.0,45.0,50.0),ob2;
    ob1.subjectInfo();
    // ob2.subjectInfo();
    return 0;

}
