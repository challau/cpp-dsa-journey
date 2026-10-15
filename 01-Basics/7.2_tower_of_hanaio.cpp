
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long towerOfHanoi(int n, int from, int to, int aux) {
        if (n == 0) {
            return 0;
        }

        long long moves = 0;

        moves += towerOfHanoi(n - 1, from, aux, to);
        moves++;
        moves += towerOfHanoi(n - 1, aux, to, from);

        return moves;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.towerOfHanoi(n, 1, 3, 2);
    return 0;
}

// tc => O(2 ^ n)
// sc => O(n)

// if n is 4 => 2^4-1 => 15
// if n is 5 => 2^5-1 => 31