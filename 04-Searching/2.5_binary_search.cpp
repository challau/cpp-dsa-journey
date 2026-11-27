// implement upper bound
// given a sorted array arr[], ans a number target the tast is to find the upper bound of the target in this given array
// the uppper bound is the smallest index in the sorted array where the element is greater than the given target
// if all the elements in the given array are smaller than or equal to the target the upper bound will be the length of the array

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
      int upper_Bound(vector<int> v, int target){

        int left = 0, right = v.size() - 1;
        int ans = v.size();

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(v[mid] > target){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }

        return ans;
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

    int target;
    cin >> target;

    cout << obj.upper_Bound(a,target) << endl;

    return 0;
}