// stack container follows LIFO (last in first out) order of insertion and deletion

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(5);

    cout << "Top element: "<< st.top() <<endl;
    st.pop();

    cout<<"Top element pop: "<< st.top() <<endl;
    return 0;
}