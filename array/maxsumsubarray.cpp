#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT32_MIN;
        int cursum=0;
        
        for(int i =0;i<nums.size();i++)
        {
            cursum = cursum+nums[i];
            
            if(cursum>maxsum){
                maxsum = cursum;
            }
            
            if(cursum <0 ){
                cursum =0 ;
            }
            
            
        }
        
        return maxsum;
    }
};


int main(){
    vector<int> nums ;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int val;
        cin>>val;
        nums.push_back(val);
    }


    
    return 0;
}