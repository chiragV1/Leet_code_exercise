#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int count=1;
        if(s==0){
            return 0;
        }
  int i =0;
        for(int j=1;j<s;j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
        }
    
};
int main()
{
    vector<int> nums;
    int n;
    cin>>n;
    
    for( int i =0;i<n;i++){
        int x;
        cin>>x;
nums.push_back(x);
    }
cout<<"-------------------------------------------------------------"<<endl;;

    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;

    Solution rd;
    int ans=rd.removeDuplicates(nums);

    for(int i =0;i<ans;i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}
