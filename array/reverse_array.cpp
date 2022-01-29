#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int arr[]={1,2,3,4,5};
    int L =sizeof(arr)/sizeof(arr[0]);
    int temp[L];
    int k;
    cin>>k;
    int i;
    for(i=0;i<L;i+=k){
        if(L%i==0){
        int left =i;
        int right = min(i+k-1,L-1);
        int m=right;
        int j=i;
        
        while(j<=m){
            temp[j]=arr[right];
            right--;
            j++;
        }
    }
    }
    if(L%i!=0){
        int left = i;
        int right=L-1;
        int m=right;
        for(int j=i;j<m;j++){
            temp[j]=arr[right];
            right--;
        }

    }
    for(int i=0;i<L;i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}