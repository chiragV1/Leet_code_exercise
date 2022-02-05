#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp=0;
    
        for(int i=0;i<n;i+=2){
            if(i>0&&arr[i-1]>arr[i]){
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
            if(i<n-1 && arr[i] <arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
                
            }
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}