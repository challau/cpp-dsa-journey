#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;

        vector<int> temp(d);

        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }

        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }

        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
};

int main() {
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    s.rotateArr(arr, d);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}




