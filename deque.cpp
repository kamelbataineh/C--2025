#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
//////////////// نفس vector بس شغله بتختلف 
////////////////

void funDeque1(){
 deque<int> v(5, 4);
    for (auto it : v)
    {
        cout << it << endl;
    }
}
//////////////////////////
//////////////////////////
//////////////////////////
//////////////////////////
void funDeque2()
{
    deque<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
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
void funDeque3(){
    deque<int> d = {1, 2, 3, 4, 5, 6, 7, 8};
d.erase(d.begin());//مسح اول رقم 
d.erase(d.begin()+2);//مسح اول رقم 
for(auto it :d)
{
    cout<<it<<" ";
}
}

//////////////////////////
//////////////////////////
//////////////////////////
//////////////////////////
int main(int argc, char const *argv[])
{

    funDeque1();
    cout << "\n--------------------\n";
    funDeque2();
    cout << "\n--------------------\n";
    funDeque3();
    return 0;
}
