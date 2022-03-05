#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int smallestnumbermissing(int arr[], int n){
        int x=arr[0];
        int count=0;
    for(int i =0;i<n;i++){
        if(arr[i]>=0){
            if(arr[i]>x && arr[i]-x==1){
                count++;
                x=arr[i];
            }
            if(arr[i]>x &&arr[i]-x==2){
                x=arr[i]-1;
            }
        }
 
    }
    if(count == n-1){
        return x+1;
    }
    else{
        return x;
    }

    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    printarray(arr, n);
    
    cout<<smallestnumbermissing(arr, n)<<endl;
    return 0;
}