#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // code here
        map<int,int> mp;
        int n = arr.size();
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<int> v;
        for(auto &p : mp){
            if(p.second > floor(n/3)){
                int s = p.first;
                v.push_back(s);
            }
        }
        return v;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    Solution obj;
    vector<int> ans = obj.findMajority(v);
    for(int x: ans){
        cout << x << " ";
    }
    return 0;
}