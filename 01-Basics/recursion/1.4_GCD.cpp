#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        int GCD_U(int a, int b){
            while(b != 0){
                int rem = a % b;
                a = b;
                b = rem;
            }

            return a;
            // return __gcd(a,b);
        }
};
int main(){
    int a, b;
    cin >> a >> b;
    Solution sj;
    cout << sj.GCD_U(a,b);
    return 0;
}