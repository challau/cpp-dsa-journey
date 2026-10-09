#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        m = abs(m);
        
        int q = n / m;
        
        int a = q * m;
        
        int b;
        
        if(n>=0){
            b = (q+1)*m;
        }
        else{
            b = (q - 1) * m;
        }
        
        
        int disA = abs(n - a);
        int disB = abs(n - b);
        
        if(disA < disB){
            return a;
        }
        
        if(disB < disA){
            return b;
        }
    
        return (abs(a) > abs(b))? a : b;
        
    }
};


int main(){
    int n, m;
    cin >> n >> m;
    Solution sj;

    cout<<sj.closestNumber(n,m);
    return 0;

}