# Employee Management System

## Overview
This project implements an Employee Management System in C++. It allows the user to perform various operations on employee data, such as adding new employees, printing all employees, deleting employees by age, and updating an employee's salary by name.

## Features
- Add new employee records.
- Print all employee records.
- Delete employees within a specified age range.
- Update the salary of an employee by name.
- Installation
- No external dependencies are required. The implementation uses C++'s standard libraries.

## Usage
Run the program and choose one of the following options:

1. Add new employee
2. Print all employees
3. Delete by age
4. Update salary by name

### Running the Program
```bash
g++ filename.cpp -o employee_management
./employee_management
```

### Example Input & Output
#### Add New Employee:
```
Enter a choice from 1 to 4:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update salary by name
Enter your choice: 1
Enter employee name: John
Enter employee age: 30
Enter employee salary: 5000
Enter employee gender(M/F): M
```

#### Print All Employees:
```
Enter a choice from 1 to 4:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update salary by name
Enter your choice: 2
Employee name: John    Employee age: 30    Employee salary: 5000    Employee gender: M
```

#### Delete by Age:
```
Enter a choice from 1 to 4:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update salary by name
Enter your choice: 3
Start age: 20
End age: 40
```

#### Update Salary by Name:
```
Enter a choice from 1 to 4:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update salary by name
Enter your choice: 4
Enter the name of the Employee: John
The current salary of the employee is: 5000
Enter the new salary: 6000
Salary have been Updated successfully
```

## Functions
- Add New Employee: Adds a new employee by accepting their name, age, salary, and gender.
- Print All Employees: Displays all employee records.
- Delete by Age: Deletes employee records whose age falls within a given range.
- Update Salary by Name: Updates the salary of an employee based on their name.
## Notes
- The employee list is stored in arrays with a maximum capacity of 10,000 employees.
- The program will continue running in a loop until terminated.
