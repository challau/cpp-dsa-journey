#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
     void reverseInGroups(vector<int>& arr, int k){
        int n = arr.size();
        for(int i = 0; i < n; i += k){
            int left = i;
            int right = min(i + k - 1, n - 1);
            while(left < right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
     }
};
int main(){
    int n,k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Solution obj;
    obj.reverseInGroups(arr,k);
    for(int x: arr){
        cout<< x << " ";
    }
    return 0;
}

