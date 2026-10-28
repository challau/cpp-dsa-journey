#include<bits/stdc++.h>
using namespace std;
// two pointers approach
class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int low = 0 , high = s.size() - 1;
        
        while(low <= high){
            if(s[low] != s[high]){
                return false;
            }else{
                low++;
                high--;
            }
        }
        return true;
        
    }
};

int main(){
    Solution obj;

    string s;
    cin >> s;

    int res = obj.isPalindrome(s);
    if(res){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}

