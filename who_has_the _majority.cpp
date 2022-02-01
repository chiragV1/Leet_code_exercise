#include<bits/stdc++.h>

using namespace std;

int majorityWins(int arr[], int n, int x, int y) {
 
    // code here
    int xcount=0;
    int ycount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            xcount++;
        }
        else if(arr[i]==y){
            ycount++;
        }
    }
    if(xcount>ycount){
        return x;
    }
    else if(xcount<ycount){
        return y;
    }
    else if(xcount ==ycount){
        if(x<y){
            return x;
        }
        if(y<x){
            return y;
        }
    }

    
}

int main(){
    int t;
    cin<<t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int x,y;
        cin>>x>>y;

        int ans = majorityWins(arr,n,x,y);
        cout<<ans<<endl;
    }
}