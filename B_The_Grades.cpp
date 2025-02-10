#include <iostream>
#include <algorithm>
using namespace std;

// ترتيب المعدلات من الاصغر للاكبر

//  واذا متساوي يرتب حسب الاحرف

//(اربع معدلات)

//(ادخال اسم يتكون من اكثر من مقطع)

struct Person
{
    string name;
    int mark1, mark2, mark3, mark4;

    Person() {}
    Person(string n, int m1, int m2, int m3, int m4)
        : name(n), mark1(m1), mark2(m2), mark3(m3), mark4(m4) {}

    int average() const
    {
        return (mark1 + mark2 + mark3 + mark4) / 4;
    }
};

bool comparePersons(const Person &a, const Person &b)
{
    if (a.average() == b.average())
    {
        return a.name < b.name; // ترتيب أبجدي إذا كانت المعدلات متساوية
    }
    return a.average() < b.average(); // ترتيب تصاعدي حسب المعدل
}

int main()
{
    int number;
    cout << "Enter number of students: ";
    cin >> number;

    if (number <= 0 || number > 100)
    {
        cout << "❌ Invalid input! Number must be between 1 and 100.\n";
        return 1;
    }

    Person person[100];

    for (int i = 0; i < number; i++)
    {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cin.ignore();
        cout << "Name: ";
        getline(cin, person[i].name);
        cout << "Mark 1: ";
        cin >> person[i].mark1;
        cout << "Mark 2: ";
        cin >> person[i].mark2;
        cout << "Mark 3: ";
        cin >> person[i].mark3;
        cout << "Mark 4: ";
        cin >> person[i].mark4;
    }

    sort(person, person + number, comparePersons);

    cout << "\n Sorted Students List:\n";
    for (int i = 0; i < number; i++)
    {
        cout << "🔹 Name: " << person[i].name
            << " | Average: " << person[i].average()
            << " | Marks: " << person[i].mark1 << ", " << person[i].mark2
            << ", " << person[i].mark3 << ", " << person[i].mark4 << endl;
    }

    return 0;
}
