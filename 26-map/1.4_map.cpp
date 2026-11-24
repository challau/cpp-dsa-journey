// finding element 
// find() function is used to check if key exists in a map which looks for key and return its positon if found

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m = {{1,"Geeks"}, {2,"for"}, {3,"Geeks"}};

    auto it = m.find(2);
    if(it != m.end()){
        cout<< it->first <<" "<< it->second;
    }else{
        cout<<"Key is not found"<<endl;
    }
    return 0;
}