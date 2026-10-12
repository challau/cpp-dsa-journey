#include<bits/stdc++.h>
using namespace std;

class fact{
    public:
        int f(int n){
            if(n == 0|| n == 1){
                return 1;
            }
            return n * f(n - 1);
        }
};
int main(){
    int n;
    cin >> n;
    fact s;
    cout<<s.f(n);
    return 0;
}