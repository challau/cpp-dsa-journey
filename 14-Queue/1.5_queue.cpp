// copy of the queue

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;

    q.push(3);
    q.push(4);
    q.push(5);

    queue<int> temq(q); // copying the queue

    while(!temq.empty()){
        cout<<temq.front()<<" ";
        temq.pop();
    }

    return 0;
}