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
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    int choice;
    int index = 0;
    int n, m = 0, s = 0, sm = 0;
    Employee *Emp[10];
    /*Q1. Provide menu driven code for the functionalities:
    1. Accept Employee

    3. Display All Managers
    4. Display All Salesman
    5. Display All SalesManagers*/
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Accept Employee :" << endl;
        cout << "2. Display count of All Employee with respect to destination :" << endl;
        cout << "3. Display All Manager" << endl;
        cout << "4. Display All Salesman" << endl;
        cout << "5. Display All SalesManager" << endl;
        cout << "Enter your choice - ";
        cin >> n;
        switch (n)
        {
        case 0:
            cout << "Thank you!!!!" << endl;
            break;
        case 1:
        {
            if (index < 10)
            {
                int n1;
                cout << "1. Manager" << endl;
                cout << "2. Salesman" << endl;
                cout << "3. SalesManager" << endl;
                cout << "enter type of employee :" << endl;
                cin >> n1;
                switch (n1)
                {
                case 1:
                    Emp[index] = new Manager();  
                    Emp[index]->accept();
                    index++;
                break;
                case 2:
                    Emp[index] = new Salesman();
                    Emp[index]->accept();
                    index++;
                break;
                case 3:
                    Emp[index] = new SalesManager();
                    Emp[index]->accept();
                    index++;
                break;
                }
                cout<<index<<endl;
                Emp[index-1]->display();
               
            }
        }
        break;
        // 2. Display the count of all employees with respect to designation
        case 2:
        {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*Emp[i]) ==typeid(Manager))
                {
                    m++;
                }
                else if (typeid(*Emp[i]) == typeid(Salesman))
                {
                    s++;
                }
                else if (typeid(*Emp[i]) == typeid(SalesManager))
                {
                    sm++;
                }
            }
            cout << "Count of All Employee :" << index  << endl;
            cout << "Count of Manager :" << m << endl;
            cout << "Cout of Salesman :" << s << endl;
            cout << "Count of SalesManagers :" << sm << endl;
            break;
        }

        break;
        // 3. Display All Managers
        case 3:
            for (int i = 0; i < index; i++)
                 if (typeid(*Emp[i]) == typeid(Manager))
                    Emp[i]->display();

            break;
            // 4. Display All Salesman
        case 4:
            for (int i = 0; i < index; i++)
                 if (typeid(*Emp[i]) == typeid(Salesman))
                    Emp[i]->display();

            break;
        case 5:
            // 5. Display All SalesManagers
              for (int i = 0; i < index; i++)
                 if (typeid(*Emp[i]) == typeid(SalesManager))
                    Emp[i]->display();
            break;
        default:
            break;
        }
    } while (n != 0);
}

int main1()
{
    // Employee *eptr = new Employee();
    // Employee *eptr = new Manager();
    // Employee *eptr = new Salesman();
    Employee *eptr = new SalesManager();
    eptr->accept(); // Late Binding
    eptr->display();

    delete eptr;
    eptr = NULL;
    return 0;
}

int main2()
{
    // Employee obj;
    // Manager obj;
    // Salesman obj;
    SalesManager obj;
    obj.accept();
    obj.display();
    return 0;
}