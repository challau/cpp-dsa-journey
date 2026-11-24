// size of stack

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(5);
    cout<<"size of stack: "<< st.size() <<endl;
    st.pop();
    cout<<"size of stack: "<< st.size() <<endl;
    return 0;
}

