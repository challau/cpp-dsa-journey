#include<bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int>& vec, int n) {

    for(int i = 0; i < n - 1; i++) {
        int didswap = 0;
        for(int j = 0; j < n - i - 1; j++) {

            if(vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }

        }
        if(didswap == 0) break;

    }
}

int main(){

    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    bubble_sort(vec,n);

    for(int x: vec){
        cout << x << " ";
    }
    
    return 0; 

}