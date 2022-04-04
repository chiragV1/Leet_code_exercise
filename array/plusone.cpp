class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size();
         bool carry = false;
        
        digits[s-1] +=1;
        
        for(int i=s-1;i>=0;i--){
            if(digits[i]>=10){
                carry = true;
                digits[i]-=10;
            }
            if(carry){
                carry = false;
                if(i==0 && digits[0]==0) digits.emplace(digits.begin() , 1);
                
                else{
                digits[i-1]+=1;
                }
            }
        }
        return digits;
    }
};