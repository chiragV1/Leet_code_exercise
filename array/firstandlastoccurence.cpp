#include<vector>
#include<iostream>

using namespace std;

int first(vector<int> a, int n ,int k ){
    int s = 0 ;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(a[mid] == k){
            ans = mid;
            e= mid-1;

        }
        else if(a[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}
int last(vector<int> a, int n ,int k ){
    int s = 0 ;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(a[mid] == k){
            ans = mid;
            s= mid+1;

        }
        else if(a[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}


int main (){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }



    cout<< "the 1st occ : "<<first(arr, n , k)<<endl;
cout<< "the last occ : "<<last(arr, n , k)<<endl;
    return 0;
}