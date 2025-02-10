#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//نفس ال array 
//////////////////////////
//////////////////////////

//////////////////////////
//////////////////////////
void funVector1()
{
    vector<int> v(5, 4);
    for (auto it : v)
    {
        cout << it << endl;
    }
}
//////////////////////////
//////////////////////////
//////////////////////////
//////////////////////////
void funVector2()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << v[0] << endl;
    v.push_back(9);           // ضيف بالاخر
    cout << v.size() << endl; // كم عددهم
    v.pop_back();             // احذف اخر واحد
    cout << v.size() << endl;
    cout << "\n--------------\n";
    for (auto it : v)
    {
        cout << it << endl;
    }
    ////////////////////////////
    cout << "\n--------------\n";
    cout << v.front() << endl; // اول رقم
    cout << v.back() << endl;  // اخر رقم
    cout << "\n--------------\n";


    // sort(v.rbegin(),v.rend()); // بدل ال  reverse
    reverse(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }

    cout << "\n--------------\n";

    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
}
//////////////////////////
//////////////////////////
//////////////////////////
//////////////////////////
int main(int argc, char const *argv[])
{

    funVector1();
    cout << "\n--------------------\n";
    funVector2();
    return 0;
}
