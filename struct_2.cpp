#include <iostream>
#include <vector>
using namespace std;

struct Employee
{
    string empName;
    int empAge;
    vector<string> empSkills;
};

// function prototypes
Employee getEmployeeData();
void showAllEmployees(const vector<Employee> &list);

int main()
{
    vector<Employee> employees;
    int count;

    cout << "Enter total number of employees: ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cout << "\n--- Employee " << i + 1 << " ---\n";
        employees.push_back(getEmployeeData());
    }

    cout << "\n========== Employee Details ==========\n";
    showAllEmployees(employees);

    return 0;
}

// function to input employee data
Employee getEmployeeData()
{
    Employee e;
    int skillCount;

    cout << "Enter name: ";
    cin >> e.empName;

    cout << "Enter age: ";
    cin >> e.empAge;

    cout << "How many skills? ";
    cin >> skillCount;

    for (int i = 0; i < skillCount; i++)
    {
        string skill;
        cout << "Enter skill " << i + 1 << ": ";
        cin >> skill;
        e.empSkills.push_back(skill);
    }

    return e;
}

// function to display employee data
void showAllEmployees(const vector<Employee> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        cout << "\nEmployee #" << i + 1 << endl;
        cout << "Name: " << list[i].empName << endl;
        cout << "Age: " << list[i].empAge << endl;
        cout << "Skills:\n";

        for (int j = 0; j < list[i].empSkills.size(); j++)
        {
            cout << "- " << list[i].empSkills[j] << endl;
        }
    }
}
