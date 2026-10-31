#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string s1 = "";
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                continue;
            }else{
                s1 += s[i];
            }
        }
        return s1;
    }
};

int main(){
    Solution obj;

    string s;
    getline(cin,s);

    cout<<obj.removeSpaces(s);

    return 0;
}