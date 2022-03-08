#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
using namespace std;

void printarray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int trapped(int a[], int n){
    int l[n], r[n];
l[0]=a[0];
    for(int i=1;i<n;i++){
        l[i]=max(l[i-1], a[i]);
    }
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        r[i]= max(r[i+1],a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min(l[i], r[i])-a[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = trapped(a , n);
    cout<<"----------------------"<<endl;
    cout<<ans<<endl;
    return 0;
}