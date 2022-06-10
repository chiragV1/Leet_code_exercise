#include<bits/stdc++.h>

using namespace std;
int pivot(vector<int> arr, int n){
    int s =0;
    int e = n-1;

    int mid = s +(e-s)/2;
    int ans =-1;
    while(s<e){
        if(arr[mid]>arr[0]){
    s= mid+1;
        }
        else if(arr[mid]<arr[0]){
            e = mid;
        }
       mid = s +(e-s)/2;
    }
    return e;
}
int main(){
    int n;
    cin>>n;
     vector<int> arr;
     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         arr.push_back(x);
     }

     int p = pivot(arr, n);
     cout<<p;
    return 0;
}