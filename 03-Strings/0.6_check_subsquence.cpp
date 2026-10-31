#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
         bool isSubsq(string& s1, string& s2){
            int m = s1.length(), n = s2.length();

            if(m > n) return false;

            int i = 0, j = 0;

            while(i < m && j < n){
                if(s1[i] == s2[j]){
                    i++;
                }
                j++;
            }
            return i == m;
        }
};
int main(){
    Solution obj;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    cout<< obj.isSubsq(s1,s2);
    return 0;
}