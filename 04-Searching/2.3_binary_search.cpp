// square root

// given a positive integer n, find the square root of n. if n is not a perfect square then return the floor value
// floor value of any number is greatest integer which is less than or equal to that number

// input : n = 4
// output : 2

// explainaiton : since, 4 is a perfect square, so its square root is 2

// input: n = 11
// output : 3

// explanation : since 11 is not a perfect square floor of square root of 11 is 3

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int floorSqrt(int n)
    {
        if (n < 2) return n;

        int left = 1, right = n / 2, ans = 0;

        while(left <= right){
            long long mid = left + (right - left)/2;
            if(mid * mid <= n){
                ans = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return ans;
    }
};


int main()
{

    Solution obj;

    int n;
    cin >> n;

    cout << obj.floorSqrt(n);

    return 0;
}

