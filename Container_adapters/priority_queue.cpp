#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun1()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(6);
    pq.push(3);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
void fun2()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(4);
    pq.push(2);
    pq.push(6);
    pq.push(3);

    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
int main(int argc, char const *argv[])
{
    fun1();
    cout << "\n--------------\n";
    fun2();

    return 0;
}
