#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID   : " << employeeID;
        cout << "\nEmployee Name : " << employeeName;
        cout << "\nSalary        : " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
    int n;
    float totalSalary = 0;
    int highestIndex = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ":\n";
        emp[i].input();
    }

    cout << "\n========== EMPLOYEE DETAILS ==========\n";

    for (int i = 0; i < n; i++)
    {
        emp[i].display();

        totalSalary += emp[i].getSalary();

        if (emp[i].getSalary() > emp[highestIndex].getSalary())
        {
            highestIndex = i;
        }
    }

    cout << "\n========== HIGHEST SALARY ==========\n";
    emp[highestIndex].display();

    cout << "\nAverage Salary = " << totalSalary / n << endl;

    delete[] emp;

    return 0;
}