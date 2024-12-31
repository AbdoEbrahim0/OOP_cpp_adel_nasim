#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <cstring>
using namespace std;

int main() {
    int arr[]={10,20,30,40,50,60};
    int *p=arr;
    //i can change in pointer value but not in array value
    for (int i=0;i<sizeof(arr)/sizeof(int) ;i++)
    {
        cout<<*(p+i) <<" ";
    }
    for (int i=0;i<sizeof(arr)/sizeof(int) ;i++)
    {
        //(arr++) = (arr=arr+1) != a=a+1
        cout<<*(arr++) <<" ";
        cout<<*(arr+1) <<" "; // work proberly
        // error as it passes incremented value to  arr which is constant
    }
    return 0;

}
