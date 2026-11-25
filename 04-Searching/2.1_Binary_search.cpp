
// Binary Search – O(log n) Time and O(1) Space
// It works on sorted arrays by repeatedly dividing the search interval in half. If the target matches the middle element, return it; otherwise, continue searching left or right. For more details refer here.

// For example: Consider the array  arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}, and the key = 23.


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binary_s(vector<int> b, int idx)
    {

        int low = 0, high = b.size() - 1;

        while(low <= high){
            int mid = (low + high)/2;
            if(b[mid] == idx){
                return mid;
            }else if(b[mid] < idx){
                low = mid + 1;
            }else{
                high = mid - 1;
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

    int idx;
    cin >> idx;

    int result = obj.binary_s(a, idx);

    if( result != -1){
        cout<< "The element found "<< result << " in this index " << endl;
    }else{
        cout<< "The element index not found in this array"<<endl;
    }
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[low..high] is present,
// otherwise -1
int binarySearch(vector<int> &arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, high, x);
    }
  return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int query = 10;
    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, query);
    if (result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}