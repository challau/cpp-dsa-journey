#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string toggleCase(string &s) {
        
        string s1 = "";
        for(char a : s){
            if(isupper(a)){
                s1 += tolower(a);
            }else{
                s1 += toupper(a);
            }
        }
        return s1;
    }
};

int main(){
    Solution obj;
    string s;
    cin >> s;
    string s1 = obj.toggleCase(s);
    cout<<s1<<endl;
}

