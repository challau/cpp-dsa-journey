// map => A map stores data in key value pairs
// => each key is unique
// => each key maps to a value
// => in sorted order
// => not allowed duplicates

#include<bits/stdc++.h>
using namespace std;

int main(){
    // creating an empty map
    map<int , string> m1;
    // intialize map with list

    map<int, string> m2 = {{1,"Geeks"}, {2,"for"}, {3,"Geetks"}};
    for(auto &p : m2){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}