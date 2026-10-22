#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos;
        vector<int> neg;
        
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < 0){
                neg.push_back(arr[i]);
            }
        }
        
        vector<int> overall;
        int p = 0, n = 0;
        
        for(int i = 0; i < arr.size(); i++){
            while(p < pos.size() && n < neg.size()){
                overall.push_back(pos[p]);
                overall.push_back(neg[n]);
                p++;
                n++;
            }
            
        }
        
        while(p < pos.size()){
            overall.push_back(pos[p]);
            p++;
        }
        while(n < neg.size()){
            overall.push_back(neg[n]);
            n++;
        }
        
        for(int i = 0; i < arr.size(); i++){
            arr[i] = overall[i];
        }
        
    }
};


int main(){
    Solution obj;
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }


    obj.rearrange(v);
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}