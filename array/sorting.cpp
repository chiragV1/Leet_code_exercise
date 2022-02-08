#include<bits/stdc++.h>
 using namespace std;
 void printarray(int arr[], int n){
     
     for(int i=0;i<n;i++ ){
         cout<<arr[i]<<" ";
     }
     cout<<"\n";
 }
 void mergesort(int arr[], int mid , int low , int hi){
     int i,j,k;
     int n1 = hi-low;
     int b[n1];
     i = low,k=low,j=mid+1;  
       while(i<=mid && j<=hi){
           if(arr[i] <= arr[j]){
               b[k]=arr[i];
               i++; k++;
           }
           else{
               b[k]= arr[j];
               j++;k++;
           }
       }
       if(i>mid){
           while(j<=hi){
               b[k]=arr[j];
               k++;
               j++;
           }
          
           }
            else{
               while(i<=mid){
                   b[k]=arr[i];
                   i++;
                   k++;
               }
       }
for(int i=0;i<hi;i++){
    arr[i] = b[i];
}
 }
 void merge(int arr[], int low, int hi){
     
     if(low<hi){
         int mid = (low + hi)/2;
         merge(arr , low , mid);
         merge(arr, mid+1, hi);
         mergesort(arr,  mid ,low , hi);
     }

 }


 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0, hi = n, mid = (low+hi)/2;

    printarray(arr, n);
    mergesort(arr, mid ,low , hi );
    printarray(arr, n);
    return 0;
}
 
 