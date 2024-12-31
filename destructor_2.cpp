#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

class phone{
private:
char name[15];
char model[10];
int price;

public:
    phone(){
        price=0;
    };
    phone(char n[],char m[],int p)
    :price{p}
    {
        strcpy(name,n);
        strcpy(model,m);
        
    }
    char *getName()
    {
        return name;
    }
    int getPrice(){
        return price;
    }
    void getInfo()
    {
        cout<<getName()<<"\n";
        cout<<model<<"\n";
        cout<<getPrice()<<"\n";
    }
    void setPhone(char n[],char m[],int p)
    {
        strcpy(name,n);
        strcpy(model,m);
        price=p;
    }
    ~phone(){
        cout<<" name: "<<name<<"  "<<" model: "<<model<< 
        " price: "<<price<<" and object deleted\n";
    }

};
void myFunction(phone p)
{
    cout<<"object edited\n";
    phone p1;
    p1=p;// try to comment this line and next one together
    cout<<"info of passed argument \n";
    p.getInfo();
    p1.setPhone("Xaoime","redmi 13c",4000);
    cout<<"info of created empty constructor \n";
    p1.getInfo();
    cout<<"after setting edition\n";
    p.getInfo();
}
int main() {
    phone ob1("samsung","a10",2000),ob2("oppo","a57",5000);
    ob1.getInfo();
    cout<<"-----"<<endl;
    ob2.getInfo();
     myFunction(ob1);
    // ob1.getInfo();
    
    return 0;

}
