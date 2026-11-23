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