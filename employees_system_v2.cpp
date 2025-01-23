#include <iostream>
using namespace std;

const int MAX = 10000; // maximum employees can be entered to the system
string Employees[MAX]; // array has the name of the employees
int Age[MAX];          // array has the ages of employees
float Salary[MAX];     // salary of each employee
char Gender[MAX];      // gender of each employee
int count = 0;         // number of employees in the system

// functoins declartion
int menu();
void employeeSystem();
void addNewEmployee();
void printAllEmployees();
void deleteEmployeesByAge();
void updateSalaryByName();

int main()
{
    employeeSystem(); // running the employee system
    return 0;
}

// menu displayed to the user
int menu()
{
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
        // check for invalid input
        if (num < 1 || num > 4)
        {
            cout << "\nInvalid choice. Try again\n";
            continue;
        }
        return num;
    }
}

// employeeSystem function to execute user request
void employeeSystem()
{
    while (true)
    {
        int choice = menu();
        if (choice == 1)
            addNewEmployee();
        if (choice == 2)
            printAllEmployees();
        if (choice == 3)
            deleteEmployeesByAge();
        if (choice == 4)
            updateSalaryByName();
    }
}

// function to add new employees to the system
void addNewEmployee()
{
    string name;
    cout << "Enter employee name: ";
    cin >> name;
    bool flag = false;

    // check if the employee exists in the system already
    for (int i = 0; i < count; i++)
    {
        if (Employees[i] == name)
        {
            cout << "Error: You have added this Employee before";
            flag = true;
            break;
        }
    }
    if (flag)
        return;

    // recieving details about the employee
    Employees[count] = name;
    cout << "Enter employee age: ";
    cin >> Age[count];
    cout << "Enter employee salary: ";
    cin >> Salary[count];
    cout << "Enter employee gender(M/F): ";
    cin >> Gender[count];
    count++;
}

// function to print all employees in the system
void printAllEmployees()
{
    for (int i = 0; i < count; i++)
    {
        // check if the employee has been remove from the system
        if (Employees[i] == " ")
            continue;
        cout << "Employee name: " << Employees[i] << "\tEmployee age: " << Age[i] << "\tEmployee salary: " << Salary[i] << "\tEmployee gender: " << Gender[i] << "\n";
    }
}

// function to delete employees between interval of ages
void deleteEmployeesByAge()
{
    int start, end;
    cout << "Start age: ";
    cin >> start;
    cout << "End age: ";
    cin >> end;
    for (int i = 0; i < count; i++)
    {
        if (Age[i] >= start && Age[i] <= end)
        {
            // reseting the data of the employee
            Age[i] = 0;
            Employees[i] = " ";
            Salary[i] = 0;
            Gender[i] = ' ';
        }
    }
}

// function to upadate salary by name
void updateSalaryByName()
{
    string name;
    cout << "Enter the name of the Employee: ";
    cin >> name;
    bool Flag = false;
    // updating the salary of the employee
    for (int i = 0; i < count; i++)
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

    // check if the employee exists in the system
    if (!Flag)
        cout << "\nNo employees with this name!\n";
}