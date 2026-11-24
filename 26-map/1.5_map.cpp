// deleting element
// erase(key)
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>m = {{1,"geeks"}, {2,"for"}, {3,"Geeks"}};
    m.erase(2);
    m.erase(m.begin());
    for(auto i: m){
        cout<<i.first << " " << i.second <<endl;
    }
    return 0;
}