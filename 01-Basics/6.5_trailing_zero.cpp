#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        long long cnt = 0;
        
        while(n >= 5){
            n /= 5;
            cnt += n;
        }
        return cnt;
        
    }
};

int main(){
    Solution j;
    cout << j.trailingZeroes(67888);
    return 0;
}

