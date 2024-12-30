#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include<string>
using namespace std;

int main() {

    int arr[]={22,55,88,99,1,0,7};    
    for (int i=0;i<sizeof(arr)/sizeof(int) ;i++)
    {
        //added size -1 cond. as last element sorted as largest by nature of swapping condtion 
        for (int j=0;j<sizeof(arr)/sizeof(int);j++)
        {
            if (arr[j+1]<arr[j])
            //  swap(arr[j+1],arr[j]);
            {
                int t;
                t= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t; 
            }
        }
    }
    for(int val: arr){
        cout<<val<<" ";
    }
    return 0;

}
