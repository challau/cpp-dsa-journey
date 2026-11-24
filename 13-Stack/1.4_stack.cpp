// empty() stack


#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    if(st.empty()){
        cout << "stack is empty " << endl;
    }
    st.push(100);
    if(!st.empty()){
        cout << "Stack is not empty. Top element: " << st.top() << endl;
    }
    return 0;
}
