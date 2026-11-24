// sets in c++ stl => sorted and unique
// sets is a container which stores unique elements
// search, insert, and delete in O(log n) order by default

// lets us take a look at an example to create a set and traverse it

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    set<int> s2 = {1,2,3,2,1};
    for(auto &x : s2){
        cout<< x << " ";
    }
    return 0;
}