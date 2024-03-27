#include <iostream>
using namespace std;
enum EAccountType
{
    SAVING,
    CURRENT,
    DMAT
};
static int index = 0;
class inSufficientFundsException
{
private:
    int accno;
    double currentBalance;
    double withdrawAmount;

public:
    void inSufficientFundExeption(int, double, double)
    {

    }
    void display()
    {
    }
};
class Account
{
private:
    int accno;
    EAccountType e;
    double balance;
    static int generate;

public:
    Account() :accno(++generate),balance(5000)
    {
    }
    Account(int accno, EAccountType e, double balance = 5000) : accno(++generate)

    {
        this->balance = balance;
        this->e = e;  
        cout<<"Your Account Number is :"<<generate<<endl;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }
    double getBalance()
    {
        return this->balance;
    }
    int getAccountNo()
    {
        return accno++;
    }
    Account *genrateAccount()
    {
        int type;
        cout << "0 SAVING ACCOUNT" << endl;
        cout << "1 CURRENT ACCOUT" << endl;
        cout << "2 DEMATE ACCOUNt" << endl;
        cout << "CHOOSE ACCOUNT TYPE :" << endl;
        cin >> type;
        e = EAccountType(type);
        // e = static_cast<EAccountType>(type);
        return new Account(accno, this->e, this->balance);
    }
    void display()
    {
        cout << this->accno << endl;
        // cout<<this->display<<endl;
        switch (e)
        {
        case SAVING:
            cout << "SAVING" << endl;
            break;
        case CURRENT:
            cout << "CURRENT" << endl;
            break;
        case DMAT:
            cout << "DEMATE" << endl;
        default:
            cout << "wrong choice"<<endl;
            break;
        }
        cout << this->balance << endl;
    }
    void withdrawal(double amount)
    {
        if (balance >= amount)
        {
            this->balance = this->balance - amount;
            setBalance(this->balance);
        }
    }
    void diposite(double amount)
    {
        this->balance = this->balance + amount;
        setBalance(this->balance);
    }
};
int Account::generate = 1000;

int main()
{
    Account *arr[5];
    Account a;
    int option;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Display Account Details" << endl;
        cout << "3. withdrwal" << endl;
        cout << "4. Diposite Amount" << endl;
        cout << "choose between the above options:" << endl;
        cin >> option;
        switch (option)
        {
            case 0:
            cout << "Thank you for choosing us....!" << endl;
            break;
            case 1:
            {
            arr[index] = a.genrateAccount();
            index++;
            }
            break;
            case 2:
            {
            for (int i = 0; i < index; i++)
            {
                // if (arr[i]->getAccountNo() == acc)
                // {
                //     arr[i]->display();
                // }
                 arr[i]->display();
            }
            }
            break;
            case 3:
            {
            double amount;
            int ac;
            cout << "enter your bank account number :" << endl;
            cin >> ac;
            

            cout<<"+++++++++++++++++"<<endl;

            for (int i = 0; i < index; i++)
            {
                if (arr[i]->getAccountNo() == ac)
                {
                    double amount;
                    cout << "enter Amount that you have to withdrwal :" << endl;
                    cin >> amount;
                    arr[i]->withdrawal(amount);
                    cout << "Current Balance :" << arr[i]->getBalance()<<endl;
                }
            }
            }
            break;
            case 4:
            {
            double amount;
            int ac;
            cout << "enter your bank account number :" << endl;
            cin >> ac;
            for (int i = 0; i < index; i++)
            {
                if (arr[i]->getAccountNo() == ac)
                {
                    double amt;
                    cout << "enter Amount that you have to diposite :" << endl;
                    cin >> amt;
                    arr[i]->diposite(amt);
                    cout << "Current Balance :" << arr[i]->getBalance()<<endl;
                }
            }
            }
            break;
            default:
            break;
        }
    }while (option != 0);
        for (int i = 0; i < index; i++)
        {
        delete arr[i];
        arr[i]=NULL;
        }
    
}