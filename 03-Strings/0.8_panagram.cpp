#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkPangram(string& s) {
        vector<int> vec(26,0);
        
        for(int i = 0; i < s.size(); i++) {
            char ch = tolower(s[i]);
            
            if(ch >= 'a' && ch <= 'z'){
                vec[ch - 'a']++;
            }
        }
        
        for(int i = 0; i < 26; i++){
            if(vec[i] == 0){
                return false;
            }
        }
        
        return true;
        
    }
};


int main(){
    Solution obj;
    string s;
    cin >> s;
    cout<< obj.checkPangram(s) ? true : false;
    return 0;
}