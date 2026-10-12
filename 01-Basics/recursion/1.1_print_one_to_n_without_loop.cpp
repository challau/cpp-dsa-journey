#include<bits/stdc++.h>
using namespace std;

// class Solution {
//   public:
//     void printTillN(int n) {
//         // code here
//         int i = 1;
//         while(i <= n){
//             cout<<i<<" ";
//             i++;
//         }
//         return;
//     }
// };

class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n == 0){
            return;
        }
        
        printTillN(n - 1);
        cout<< n <<" ";
    }
};

int main(){
    int n;
    cin >> n;
    Solution sj;
    sj.printTillN(n);
    return 0;
}

