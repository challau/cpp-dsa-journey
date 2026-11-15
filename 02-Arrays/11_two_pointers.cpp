
// Two sum in sorted arrays

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, target;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> target;

    int i = 0, j = n - 1;

    while(i <= j){
        int sum = a[i] + a[j];

        if(sum == target){
            cout << i << " " << j;
            return 0;
        } else if (sum < target){
            i++;
        }else{
            j--;
        }
    }
    cout<<"Not found";
    return 0;
}
