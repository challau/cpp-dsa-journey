#include<bits/stdc++.h>
using namespace std;
class loop{
    public:
        void withoutloop(int n){
            if(n == 0){
                return;
            }

            cout<< n <<" ";
            withoutloop(n - 1);
        }
};

int main(){
    int n;
    cin >> n;

    loop l;
    l.withoutloop(n);
    return 0;
}