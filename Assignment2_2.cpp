#include <iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int noCar;
    double totalAmt;

public:
    Tollbooth() : Tollbooth(0, 0) {}
    Tollbooth(unsigned int noCar, double totalAmt)
    {
        this->noCar = noCar;
        this->totalAmt = totalAmt;
    }
    void noPayCar()
    {
        this->noCar=this->noCar+1;
    }
    void payingCar()
    {
        this->noCar=this->noCar+1;
        this->totalAmt = this->totalAmt + 0.50;
    }
    void printOnConsole()
    {
        cout << "total number of car passed tollbooth:\n"
             << noCar << endl;
        cout << "total Amount Collected:\n"
             << totalAmt << endl;
    }
};
int main()
{
    Tollbooth t;

    int n;
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Paying Car" << endl;
        cout << "2. Not Paying Car" << endl;
        cout << "3. Total of Car and Amount" << endl;
        cin >> n;
        switch (n)
        {
        case 0:
            cout << "Thank You for Trusting US!!";
            break;
        case 1:
        {
            cout << "entry of toll Added!";
            t.payingCar();
            break;
        }
        break;
        case 2:
        {
            cout << "entry of VIP car Added!";
            t.noPayCar();
            break;
        }
        case 3:
        {
            t.printOnConsole();
            break;
        }
        default:
                cout<<"You made a Wrong Choice";
            break;
        }
    } while (n != 0);
    return 0;
}