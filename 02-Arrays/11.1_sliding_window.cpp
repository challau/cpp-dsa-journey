// fixed size sliding window


#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n,k;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> k;
    int sum = 0;


    for(int i = 0; i < k; i++){
        sum += a[i];
    }

    int maxi = sum;

    for(int i = k; i < n; i++) {
        sum += a[i];
        sum -= a[i - k]; // add new element
        maxi = max(maxi, sum); // remove old element
    }

    cout << maxi;
}
*/

// variable size sliding window
// Smallest subarray with sum greater than or equal to K
int main() {
    int n, k;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> k;

    int left = 0;
    int sum = 0;
    int ans = INT_MAX;

    for(int right = 0; right < n; right++) {
        sum += a[right];

        while(sum >= k) {
            ans = min(ans, right-left+1);
            sum -= a[left];
            left++;
        }
    }

    if(ans == INT_MAX)
        cout << 0;
    else
        cout << ans;

    return 0;
}
