#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        
        for(auto &t : mp){
            if(t.second > arr.size()/2){
                return t.first;
            }
        }
        
        return -1;
    }
};

int main(){
    Solution obj;
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = obj.majorityElement(a);
    cout<< res <<endl;
    return 0;
}