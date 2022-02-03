#include<bits/stdc++.h>

using namespace std;
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        
     vector<int> v;
     v.push_back(a[n-1]);
     int max = a[n-1];
     for(int i=n-2;i>=0;i--){
         if(a[i]>=max){
             max=a[i];
             v.push_back(a[i]);
         }
     }
     reverse(v.begin(),v.end());
return v;
       
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
vector<int> v = ob.leaders(a,n);
        for(auto it=v.begin();it!=v.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}