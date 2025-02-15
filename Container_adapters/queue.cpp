#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(4);
    q.push(2);
    q.push(6);
    q.push(3);

    cout << q.front() << endl;
    cout << "--------------\n";

    cout << q.size() << endl;
    q.pop();
    cout << q.size() << endl;
    cout << q.empty() << endl;
    // firist in   first out
    return 0;
}
