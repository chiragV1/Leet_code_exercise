#include<bits/stdc++.h>
using namespace std;


      int first(int arr[], int key ){
          int s=0;
          int e  = 5;
           int mid = s + (e-s)/2;
          int ans =-1;
          while(s<=e){
              int mid = s + (e-s)/2;

              if(mid ==key){
                  ans = mid;
              }
              else if(mid>key){
                  e=mid-1;
              }
              else{
                  s = mid+1;
              }
              mid = s + (e-s)/2;
          }

          return ans;
      }
   




int main(){

    int  arr[6] ={1,2,3,3,4,5};
    int key ;
    cin>>key;
    
    int right = first(arr, key);

    cout<<right;

    return 0;
}