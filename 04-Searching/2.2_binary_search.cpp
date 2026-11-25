// sorted Insert position

// given a sorted array arr[] (0 - index based) of distinct intergers and an integer k, find the index of k if it is present in the arr[]. if not return the index where k should be inserted to maintian the sorted order

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       int searchInsertK(vector<int> &arr, int k){
        int left = 0, right = arr.size() - 1;
        while(left <= right){
            int mid = (left + right) / 2;
            if(arr[mid] == k){
                return mid;
            }else if(arr[mid] <= k) {
                left = mid + 1;
            }else {
                right = mid - 1;
            }
        }

        return left;
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
    
    int k;
    cin >> k;

    cout << obj.searchInsertK(a,k);

    return 0;
}
