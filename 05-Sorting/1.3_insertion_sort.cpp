#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vec,int n){
    for(int i = 1; i < n; i++){
        int key = vec[i];
        int j = i - 1;
        while(j >= 0 && vec[j] > key){
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = key;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    insertion_sort(a,n);
    for(int x: a){
        cout << x << " ";
    }
    return 0;
}