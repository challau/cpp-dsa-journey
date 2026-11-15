#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int even = 0, odd = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"The even numbers: "<<even<<endl;
    cout<<"The odd numbers: "<<odd<<endl;
    return 0;
}
