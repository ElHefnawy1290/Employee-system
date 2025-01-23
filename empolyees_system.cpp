#include <iostream>
using namespace std;

int main()
{
    const int MAX = 10000;
    string Employees[MAX];
    int Age[MAX];
    float Salary[MAX];
    char Gender[MAX];
    int cnt = 0;
    while (true)
    {
        int num = -1;
        cout << "\nEnter a choice from 1 to 4:\n";
        cout << "1) Add new employee\n";
        cout << "2) Print all employees\n";
        cout << "3) Delete by age\n";
        cout << "4) Update salary by name\n";
        cout << "Enter your choice: \n";
        cin >> num;
        if (num < 1 || num > 4)
        {
            cout << "\nInvalid choice. Try again\n";
            continue;
        }
        if (num == 1)
        {
            string name;
            cout << "Enter employee name: ";
            cin >> name;
            bool flag = false;
            for (int i = 0; i < cnt; i++)
            {
                if (Employees[i] == name)
                {
                    cout << "Error: You have added this Employee before";
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            Employees[cnt] = name;
            cout << "Enter employee age: ";
            cin >> Age[cnt];
            cout << "Enter employee salary: ";
            cin >> Salary[cnt];
            cout << "Enter employee gender(M/F): ";
            cin >> Gender[cnt];
            cnt++;
        }
        if (num == 2)
        {
            for (int i = 0; i < cnt; i++)
            {
                if (Employees[i] == " ")
                    continue;
                cout << "Employee name: " << Employees[i] << "\tEmployee age: " << Age[i] << "\tEmployee salary: " << Salary[i] << "\tEmployee gender: " << Gender[i] << "\n";
            }
        }
        if (num == 3)
        {
            int start, end;
            cout << "Start age: ";
            cin >> start;
            cout << "End age: ";
            cin >> end;
            for (int i = 0; i < cnt; i++)
            {
                if (Age[i] >= start && Age[i] <= end)
                {
                    Age[i] = 0;
                    Employees[i] = " ";
                    Salary[i] = 0;
                    Gender[i] = ' ';
                }
            }
        }
        if (num == 4)
        {
            string name;
            cout << "Enter the name of the Employee: ";
            cin >> name;
            bool Flag = false;
            for (int i = 0; i < cnt; i++)
            {
                if (name == Employees[i])
                {
                    Flag = true;
                    cout << "The current salary of the employee is: " << Salary[i] << "\n";
                    cout << "Enter the new salary: ";
                    int salary;
                    cin >> salary;
                    Salary[i] = salary;
                    cout << "Salary have been Updated successfully\n";
                }
            }
            if (!Flag)
                cout << "\nNo employees with this name!\n";
        }
    }
    return 0;
}