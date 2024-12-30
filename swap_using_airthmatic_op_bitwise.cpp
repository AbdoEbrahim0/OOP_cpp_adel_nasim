// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <stdio.h>
void increment(int &x,int &y)
{
    
    y++;
    x++;

}
int main()
{
    /*
    int x=0, y=0;
    increment(x, y);
    cout << "x,y ! \n"<<x<<" "<<y;
    */
    unsigned int a = 5; //0000 0101 
    unsigned int b = 9; //0000 1001
    cout << (a & b)<<"\n"; //1
    cout << (a | b) << "\n";//13
    cout << (a ^ b) << "\n";// 0000 1100 //12
    //note it deal with num as 32 bit so result is 4294967290
    cout << (~a ) << "\n";// 1111 1010 // 2^7+2^6+2^5+2^4  +2^3+0+2^1+0  //
    cout << (b<<1) << "\n";//left shift //0000 1001  into 0001 0010 =2^4+2=18
    cout << (b >> 1) << "\n";//left shift //0000 1001  into 0000 0100 =2^2=4
    //swap values
    cout << " swap values using airthnmatic op" << endl;
    cout << a << " " << b<<"\n";
    a = a + b;//5+9=14
    b = a - b;//14-9=5
    a = a - b;//14-5=9
    cout << a << " " << b << "\n";
    cout << " swap values using ^" << endl;
    cout << a << " " << b << "\n";
    a = a ^ b;//5+9=14
    b = a ^ b;//14-9=5
    a = a ^ b;//14-5=9
    cout << a << " " << b << "\n";

    //printf("a&b = %u\n", a & b);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
