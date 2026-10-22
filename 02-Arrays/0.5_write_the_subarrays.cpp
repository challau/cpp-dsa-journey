#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<vector<int>> getSubArrays(vector<int> & arr){
            vector<vector<int>> ans;
            int n = arr.size();
            for(int i = 0; i < n; i++){
                vector<int> temp;
                for(int j = i; j < n; j++){
                    temp.push_back(arr[j]);
                    ans.push_back(temp);
                }
            }

            return ans;
        }
};

int main(){
    vector<int> arr = {1,2,3};

    Solution obj;

    vector<vector<int>> result = obj.getSubArrays(arr);

    for(auto sub : result){
        for(int x : sub){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}