#include <bits/stdc++.h>

using namespace std;

class solution
{

public:
    int majel(vector<int> arr, int n)
    {
        int ansind = 0;
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == arr[ansind])
            {
                count++;
            }
            else
            {
                count--;
            }

            if (count == 0)
            {
                ansind = i;
                count = 1;
            }
        }
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[ansind] == arr[i])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return arr[ansind];
        }
        return 0;
    }
};

int main()
{
    int n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    solution ob;
    int ans = ob.majel(arr , n);
    cout<<ans<<endl;

    return 0;
}
