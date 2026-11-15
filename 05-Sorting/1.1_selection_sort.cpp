#include<bits/stdc++.h>
using namespace std;

void selection_sorr(vector<int>& a, int n){
    for(int i = 0; i < n-2; i++) {
        int mini = i;
        for(int j = i; j <= n - 1; j++) {
            if(a[j] < a[mini]){
                mini = j;
            }
        }

        swap(a[mini],a[i]);
    }
}
int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    selection_sorr(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}