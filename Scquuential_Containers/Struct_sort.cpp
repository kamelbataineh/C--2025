#include <iostream>
#include <algorithm>
using namespace std;
/// ترتيب تصاعدي للموضفين حسب الراتب  والاسم
///
/// اذا الراتب متساوي بشوف الاحرف
///
/// واذا الاحرف نفس الاشي بشوف الحرف الثاني

struct Person
{
    string name;
    int salary;

    Person() {}
    Person(string n, int s) : name(n), salary(s) {}
};
/////////////////////
/////////////////////
/////////////////////
/////////////////////
/////////////////////
bool SalaryORName(const Person &a, const Person &b)
{
    if (a.salary == b.salary)
    {
        return a.name < b.name; // ترتيب أبجدي إذا كان الراتب متساويًا
    }
    return a.salary < b.salary; // ترتيب تصاعدي حسب الراتب
}
/////////////////////
/////////////////////
/////////////////////
/////////////////////
/////////////////////
int main(int argc, char const *argv[])
{

    Person person[100];

    int number;
    cout << "number :";
    cin >> number;

    if (number <= 0 || number > 100)
    {
        cout << "Invalid input! Number must be between 1 and 100.\n";
        return 1;
    }

    //////////////////////////////////

    for (int i = 1; i <= number; i++)
    {
        string name;
        int salary;
        cout << "name :";
        cin >> name;
        cout << "salary :";
        cin >> salary;
        person[i] = Person(name, salary);
    }
    sort(person, person + number, SalaryORName);

    /////////////////////////////////////
    
    for (int i = 1; i <= number; i++)
    {
        cout << "Name: " << person[i].name << ", Salary: " << person[i].salary << endl;
    }

    return 0;
}
