#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void removeCharacter(string &s, char c) {
        // code here
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                s.erase(i,1);
                i--;
            }
        }
    }
};

int main(){
    Solution obj;
    string s;
    cin >> s;
    char j;
    cin >> j;
    obj.removeCharacter(s,j);
    cout << s << endl;
    return 0;
}