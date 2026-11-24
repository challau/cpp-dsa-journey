// deleting element
// to delete an element for a set use erase() it removes the elements it exits else does nothing
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s = {1,2,3,4};
    s.erase(2);
    s.erase(s.begin());
    for(auto i : s){
        cout << i << endl;
    }
    cout<<endl;
    return 0;
}