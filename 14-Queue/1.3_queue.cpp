// deleting elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}