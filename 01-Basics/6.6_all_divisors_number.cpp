#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int> v;
        int i = 1;
        
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                v.push_back(i);
                
                if(i != n/i){
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};

int main(){
    int n; 
    cin >> n;
    Solution j;
    vector<int> ans = j.getDivisors(n);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}