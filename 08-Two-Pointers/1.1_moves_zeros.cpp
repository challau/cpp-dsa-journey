
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void movesZero(vector<int>& vec) {

        int j = 0;

        for(int i = 0; i < vec.size(); i++) {

            if(vec[i] != 0) {
                swap(vec[i], vec[j]);
                j++;
            }
        }
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    Solution obj;

    obj.movesZero(vec);

    for(int x : vec) {
        cout << x << " ";
    }

    return 0;
}
