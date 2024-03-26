#include <iostream>
using namespace std;
class Date
{
protected:
    int day;
    int month;
    int year;

public:
    Date() : Date(01, 01, 1999) {}
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDay(int day){
        this->day=day;
    }
    void setMonth(int month){
        this->month=month;
    }
    void setyear(int year){
        this->year=year;
    }
    void acceptDate()
    {
        cout << "Enter A day, month, year of the date :" << endl;
        cin >> this->day >> this->month >> this->year;
    }
    void displayDate()
    {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
    }
};
class Person
{
private:
    string name;
    string address;
    Date DOB;

public:
    Person(string name, string address, int day, int month, int year) : DOB(day, month, year)
    {
        this->name = name;
        this->address = address;
    }
    Person()
    {
        this->name = "ABC";
        this->address = "123";
    }
     void acceptData()
    {
        getchar();
        cout << "Enter name of Person :" << endl;
        getline(cin, name);
        getchar();
        cout << "Enter address of Person :" << endl;
        getline(cin, address);
        DOB.acceptDate();
    }
    void displayData()
    {
        cout << "Name of Person :" << name << endl;
        cout << "Enter address of Person :" << address << endl;
        DOB.displayDate();
    }
};
class Employee : public Person
{
private:
    int employeeId;
    int departmentNO;
    double salary;
    Date DOJ;

public:
    Employee()
    {
        this->employeeId = 10001;
        this->departmentNO = 10;
        this->salary = 8000;
        DOJ.setDay(10);
        DOJ.setMonth(11);
        DOJ.setyear(2001);
       }
    Employee(int employeeId, int departmentNo, double salary, string name, string address, int day, int month, int year) : Person(name, address, day, month, year)
    {
        this->employeeId = employeeId;
        this->departmentNO = departmentNO;
        this->salary = salary;
        // DOJ.acceptDate();
        Person::acceptData();
    }
    ~Employee(){

    }
    void acceptData()
    {
        cout << "Enter a Employee id :" << endl;
        cin >> employeeId;
        cout << "Enter department Number :" << endl;
        cin >> departmentNO;
        cout << "Enter a salary of employee :" << endl;
        cin >> salary;
        DOJ.acceptDate();
        Person::acceptData();
    }
    void displayData()
    {
        cout << "Employee ID :" << employeeId << endl;
        cout << "Employee Department No :" << departmentNO << endl;
        cout << "Employee Salary :" << salary << endl;
        cout<<"Date of joing :"<<endl;
        DOJ.acceptDate();
        Person::displayData();
    }
};
int main()
{
    Employee E1;
    E1.acceptData();
    E1.displayData();
    Person p1;
    p1.acceptData();
    p1.displayData();

    Person *ptr=new Employee();
    ptr->acceptData();
    ptr->displayData();
    delete ptr;
    ptr =NULL;
}