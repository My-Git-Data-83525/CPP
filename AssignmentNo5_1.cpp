#include <iostream>
#include<string>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : Date(1, 1, 1990) {}
    Date(int d, int m, int y)
    {
        this->day = d;
        this->month = m;
        this->year = m;
    }
    void acceptDate()
    {
        cout << "Enter A date :" << endl;
        cin >> day;
        cout << "Enter month" << endl;
        cin >> month;
        cout << "Enter year :" << endl;
        cin >> year;
    }
    void dispalyDate()
    {
        cout << day << "-" << month << "-" << year << endl;
    }
};
class Person
{
private:
    string name;
    string address;
    Date DFB;

public:
    Person(string name, string address)
    {
        this->name = name;
        this->address = address;
    }
    Person():Person("ABCD","XYZ"){}
    void acceptPerson()
    {
        cout << "Enter Name Person :" << endl;
        cin>>name;
        cout << "Enter Address : " << endl;
        cin>>address;
        DFB.acceptDate();
    }
    void displayPerson()
    {
        cout << "Name of Person :" << name << endl;
        cout << "Address of Person : " << address << endl;
        DFB.dispalyDate();
    }
};
class Employee
{
private:
    int employeeId = 100;
    double employeeSalary;
    int employeeDepartment;
    Date dateOfJOining;

public:
    Employee() : Employee(employeeId, 80000.14, 10) {}
    Employee(int empid, double empsal, int empdept) : employeeId(++employeeId)
    {
        this->employeeId = empid;
        this->employeeSalary = empsal;
    }
    void acceptEmployee()
    {
        cout << "Enter Employee Salary :" << endl;
        cin >> employeeSalary;
        cout << "enter Department of Employee: " << endl;
        cin >> employeeDepartment;
        dateOfJOining.acceptDate();
    }
    void displayEmployee()
    {
        cout << "Employee Id :" << employeeId << endl;
        cout << "Employee Salary :" << employeeSalary << endl;
        cout << "Employee deparment NO :" << employeeDepartment << endl;
    }
};
int main()
{
    // Employee e1;
    // e1.acceptEmployee();
    // e1.displayEmployee();
    Person p1;
    p1.acceptPerson();
    p1.displayPerson();
}