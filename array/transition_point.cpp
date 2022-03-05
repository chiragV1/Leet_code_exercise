#include<bits/stdc++.h>
using namespace std ;
int transitionPoint(int arr[], int n);
 
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = transitionPoint(arr,n);
    cout<<res<<endl;
}
}

int transitionPoint(int arr[], int n) {
    // code here
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==1){
            break;
        }
    }
    if(i>=n){
        return -1;
    }
    if(i<n){
    return i;
    }
}