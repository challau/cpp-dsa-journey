// inserting elements
// the insert() operation adds a new key_value pairs to the map only if the key is not already present
// if the key exists insert does not update the value and leave the map unchanged
// tc => O(log n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string>m = {{2,"For"}, {3,"Geeks"}};
    m.insert({1,"Geeks"});
    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}

