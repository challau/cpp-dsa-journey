// Basic Searching Algorithms:
// Linear Search – O(n) Time and O(1) Space
// It is the simplest searching algorithm that checks each element sequentially until the key is found or the collection is fully traversed. Works on both sorted and unsorted data. For more details refer here.

// For example: Consider the array arr[] = {10, 50, 30, 70, 80, 20, 90, 40} and key = 30



#include <bits/stdc++.h>
using namespace std;

class Soultion
{
public:
    int linear_S(vector<int> s, int idx)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == idx)
            {
                return i;
            }
        }
        return -1;
    }
};
// time complexity takes O(n) space take O(1)

int main()
{
    Soultion obj;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int idx;
    cin >> idx;
    int result = obj.linear_S(a, idx);
    if (result != -1)
    {
        cout << "The index found the " << result << endl;
    }
    else
    {
        cout << "The index not found " << endl;
    }
    return 0;
}