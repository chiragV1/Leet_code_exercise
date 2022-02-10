#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        //code here
        int min =-1;
        set<int> my;
        for(int i=n-1;i>=0;i--){
            if(my.find(arr[i])!=my.end()){
                min = i;
            }
            else{
                my.insert(arr[i]);
            }
        }
        if(min !=-1){
            return min+1;
        }
        else{
            return -1;
        }
        
    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    Solution ob;
    int ans = ob.firstRepeated(arr, n);
    cout<<ans<<endl;
}