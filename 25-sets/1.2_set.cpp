// inserting elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s = {2,3};
    s.insert(1);
    for(auto &x : s){
        cout<< x <<" ";
    }
    return 0;
}