
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printPat(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n - i; j++)
                cout << " ";

            for(int j = 1; j <= 2 * i - 1; j++) {
                if(j == 1 || j == 2 * i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << "\n";
        }

        for(int i = n - 1; i >= 1; i--) {
            for(int j = 1; j <= n - i; j++)
                cout << " ";

            for(int j = 1; j <= 2 * i - 1; j++) {
                if(j == 1 || j == 2 * i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Solution sj;
    int n;
    cin >> n;
    sj.printPat(n);
    return 0;
}