#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double power(double b, int e) {
        // code here
        long long exp = e;
        if(exp < 0){
            b = 1.0 / b;
            exp =- exp;
        }
        
        double ans = 1.0;
        
        while(exp > 0){
            if(exp % 2 == 1){
                ans *= b;
            }
            
            b *= b;
            exp /= 2;
        }
        return ans;
    }
};

int main(){
    double a, b;
    cin >> a >> b;
    Solution sj;
    cout<< sj.power(a,b);
    return 0;
}
