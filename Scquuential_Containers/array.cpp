#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    // vector<array<int,5>>v;
    array<int, 5> arr = {10, 20, 30, 40, 50};

    cout << "Array elements:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Element at index 2: " << arr.at(2) << endl;

    cout << "Size of the array: " << arr.size() << endl;

    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    return 0;
}
