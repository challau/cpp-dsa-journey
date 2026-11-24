// Largest in Array

// given an array[], the task is to find largest element and return it
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int Largest(vector<int> &arr)
    {
        int lar_num = arr[0];

        for(int i = 1; i < arr.size(); i++){
            if(lar_num <= arr[i]){
                lar_num = arr[i];
            }
        }
        return lar_num;
    }
};

// time O(n) space O(n)

int main(){
    Solution obj;
    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int result = obj.Largest(vec);

    cout << "The largest number is: " << result <<endl;
    return 0;

}