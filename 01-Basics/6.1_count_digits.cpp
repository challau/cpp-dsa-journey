#include<bits/stdc++.h>
using namespace std;
// class Solution {
//   public:
//     int countDigits(int n) {
//         if( n == 0){
//             return 1;
//         }
//         int count = 0;
//         while(n > 0){
//             count++;
//             n /= 10;
//         }
//         return count;
//     }
// };


class cnt{
    public:
       int countDigits(int n){
          if(n == 0){
            return 0;
          }
          return 1 + countDigits(n / 10);
    }
};

int main(){
    // Solution s;
    cnt c;
    cout << c.countDigits(1234);
    return 0;
}

// countDigits(12345)
// = 1 + countDigits(1234)
// = 1 + 1 + countDigits(123)
// = 1 + 1 + 1 + countDigits(12)
// = 1 + 1 + 1 + 1 + countDigits(1)
// = 1 + 1 + 1 + 1 + 1 + countDigits(0)
// = 5



// Base case: if (n == 0) return 0;

// Recursive call: 1 + countDigits(n / 10)
