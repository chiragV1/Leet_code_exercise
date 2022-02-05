class Solution{
public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code her
           vector <int> m;
         long long currsum=0;
    int p1=0,p2=0;
    for(int i=-1;i<n;){
        if(currsum<s){
            currsum+=arr[++i];
            p2=i;
        }

        else if(currsum>s){
            currsum-=arr[p1];
            p1+=1;
        }
        
        if(currsum==s){
            m.push_back(p1+1);
            m.push_back(p2+1);
            return m;
        }        

    }
    
    m.push_back(-1);
    return m;
    }
};