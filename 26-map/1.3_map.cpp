// updating elements
// map[key] = new value
// tc => O(log n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m = {{1,"Geeks"},{2,"for"},{3,"Geeks"}};
    m[0] = "Tweaks";
    m.at(1) = "BY";

    cout<<m[0]<<endl;
    cout<<m.at(1)<<endl;

    for(auto &p : m){
        cout<<p.first <<" => "<<p.second<<endl;
    }
    return 0;
}