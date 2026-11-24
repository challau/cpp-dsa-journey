// inserting element

#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;

    q.push(3);
    q.push(4);
    q.push(5);
    q.push(9);

    
    cout<<"The front element "<<q.front()<<endl;
    cout<<"The back element "<<q.back()<<endl;

    return 0;
}