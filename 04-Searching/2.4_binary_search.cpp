// implement lower bound

// given a sorted array[] following 0-based indexing and a number target, find the lower bound of the target in this given array

// the lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number

// if all the elements in the given array are smaller than the target the lower bound will be the length of the array

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lower_num_index(vector<int> a, int target)
    {
        int left = 0, right = a.size() - 1;

        int ans = a.size();

        while (left <= right)
        {
            
            int mid = left + (right - left) / 2;
            if (a[mid] >= target)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }

        }
        return ans;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;

    cout << obj.lower_num_index(v, target) << endl;
    return 0;
}


