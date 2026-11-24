// accessing element

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<"The front is: "<<q.front()<<endl;
    cout<<"The back is: "<<q.back()<<endl;
    return 0;
}