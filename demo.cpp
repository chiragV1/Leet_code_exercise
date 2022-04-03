#include<stdio.h>
#include<stack>
#include<iostream>
#include<array>

using namespace std;

int main()
{

    int n; 
    cin>>n;
    int arr[n];

    int num;
    cin>>num;

    int size = sizeof(arr)/sizeof(arr[0]);

    int i=0;
    for(int j=0; j<size;j++){
        if(arr[j]==num){
            i=j;
        }
        
    }
    return 0;
}
