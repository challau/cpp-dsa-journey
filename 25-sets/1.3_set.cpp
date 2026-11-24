// searching elements
// The find() function is used to check whether an element exit it returns an iterator to the element if found else return end() if the elements is not found

// the count() function can also be used to check existance return 1 if the element is present , 0 otherwise
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s = {1,2,3};

    auto it = s.find(1);
    if(it != s.end()){
        cout<<"Element found: "<< *it<<endl;
    }

    if(s.count(2)){
        cout<<"2 exists in the set"<<endl;
    }

    cout<<"All elements: "<<endl;

    for(auto x : s){
        cout<< x << " ";
    }

    cout<<endl;
    return 0;
}