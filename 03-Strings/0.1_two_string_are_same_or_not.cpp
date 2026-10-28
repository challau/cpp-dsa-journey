#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        if(s1.size() < s2.size() || s1.size() > s2.size()){
            return false;
        }
        // code here
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution obj;
    string s1, s2;
    cin >> s1 >> s2;

    bool result = obj.areStringsSame(s1,s2);
    if(result){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}