#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        int n1 = abs(n);
        int rev = 0;
        int original = n1;
        
        while(n1 > 0){
            int Lastdigit = n1 % 10;
            rev = rev * 10 + Lastdigit;
            n1 = n1/10;
        }
        
        if(rev ==  original){
            return true;
        }
        return false;
        
    }
};


int main(){
    int n;
    cin >> n;
    Solution j;
    int P = j.isPalindrome(n);
    if (P){
        cout<<"Panlindrome";
    }else{
        cout<<"Not Panlindrome";
    }
    return 0;
}