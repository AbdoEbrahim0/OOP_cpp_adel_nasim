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
    ~phone(){
        cout<<"name: "<<name<<"  "<<"model: "<<model<< 
        "price: "<<price<<" and object deleted\n";
    }
};
int main() {
    phone ob1("samsung","a10",2000),ob2;
    cout<<ob1.getName()<<endl;
    cout<<ob1.getName()<<endl;
    cout<<ob2.getPrice()<<endl;
    return 0;

}
