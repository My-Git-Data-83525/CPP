#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        this->id = 1;
        this->salary = 0;
    }
    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }
    int getId()
    {
        return this->id;
    }

    void setId(int id)
    {
        this->id = id;
    }

    double getSalary()
    {
        return this->salary;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    void accept()
    {
        cout << "Enter Employee ID :" << endl;
        cin >> id;
        cout << "Enter Salary Of Employee :" << endl;
        cin >> salary;
    }
    void display()
    {
        cout << "Employee Id :" << id << endl;
        cout << "Employee Salary :" << salary << endl;
    }
};
class Manager :virtual public Employee
{
private:
    double bonus;

public:
    Manager()
    {
        this->bonus = 3000;
    }
    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
    }
    double getBonus()
    {
        return this->bonus;
    }
    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee::accept();
        cout << "Enter Employee Bonus :" << endl;
        cin >> bonus;
    }
    void display()
    {
        Employee::display();
        cout << "Employee Bonus :" << bonus << endl;
    }
};
class Salesman :virtual public Employee
{
private:
    double commission;

public:
    Salesman()
    {
        commission = 1000;
    }
    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        this->commission = commission;
    }
    double getCommission()
    {
        return commission;
    }
    void setCommission(double commission)
    {
        this->commission = commission;
    }
    void accpet()
    {
        //Employee::
        accept();
        cout << "Enter commission of Employee :" << endl;
        cin >> commission;
    }
    void display(){
        //Employee::
        display();// without employee get error of segmentation fault
        cout<<"Commission :"<<commission<<endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
};

int main()
{

    // Employee *ptr = new Manager();
    Employee *ptr=new Salesman();
    //Salesman *sptr=(Salesman *)ptr;
   // Salesman *sptr=static_cast<Salesman *>(ptr*);
     //Employee* sptr = static_cast<Employee*>(ptr);
    Salesman* sptr = static_cast<Salesman*>(ptr*);

    ptr->accept();
    ptr->display();
    sptr->accpet();
    sptr->display();
    //ptr->display();
    return 0;
}
