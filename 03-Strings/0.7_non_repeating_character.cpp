#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        char nonRepeationChar(string &s){
            map<char,int> mp;

            for(int i = 0; i < s.size(); i++){
                mp[s[i]]++;
            }

            for(int i = 0; i < s.size(); i++){
                if(mp[s[i]] == 1){
                    return s[i];
                }
            }

            return '$';

        }
};

int main(){
    Solution obj;
    string s;
    getline(cin,s);

    cout << obj.nonRepeationChar(s);
    return 0;
}