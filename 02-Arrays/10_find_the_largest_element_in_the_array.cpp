#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    int largest = vec[0];

    for(int i = 1; i < n; i++){
        if(vec[i] > largest){
            largest = vec[i];
        }
    }

    cout << largest;
    return 0;
}