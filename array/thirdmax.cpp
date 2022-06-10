#include<bits/stdc++.h>

using namespace std;
int thirdmax(int arr[], int n){
    set<int> s;
    for(int i =0;i<n;i++){
        s.insert(arr[i]);
    }
    if(s.size()<=2){
        return s[s.size()];
    }


}
int main()
{
    int n ;
    cin>>n;
    
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }


    return 0
}