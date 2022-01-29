#include<stdio.h>
#include<iostream>

using namespace std;
 int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }

     int d;
     cin>>d;

    int temp[n];
         
     for(int i=0;i<d;i++){
         temp[i]=a[i];
     }
     for(int j=0;j<n-d;j++){
         a[j]=a[j+d];
     }
     int z=0;
     for(int i=n-d;i<=n-1;i++){
         a[i]=temp[z];
         z++;
     }

     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     return 0;
 }