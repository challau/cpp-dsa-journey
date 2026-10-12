#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int count(int n){
        int cnt = 0;
        while(n > 0){
            cnt++;
            n /= 10;
        }
        return cnt;
    }
    
    bool armstrongNumber(int n) {
        // code here
        int Arms = n;
        int d = count(n);
        int sum = 0;
        while(n > 0){
            int digits = n % 10;
            sum += pow(digits,d);
            n /= 10;
        }
        if(sum == Arms){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution sj;
    cout << sj.armstrongNumber(153);
    return 0;
}