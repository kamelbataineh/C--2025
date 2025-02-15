#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(4);
    st.push(2);
    st.push(6);
    st.push(3);
    
    cout<<st.top()<<endl;
    cout<<"--------------\n";
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    //last in    first out 
    return 0;
}
