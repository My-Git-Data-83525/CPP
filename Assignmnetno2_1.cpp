#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box() : Box(10, 11, 12) {}
    Box(double value) : Box(value, value, value){};
    Box(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    void calvalume()
    {
        cout << this->length * this->width * this->height << endl;
    }
};
int main()
{
    int n;

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Calculate Volume by Default :" << endl;
        cout << "2. Calculate Volume with Same Value" << endl;
        cout << "3. Calculate Volume with Diffrent values:" << endl;
        cout << "Enter a value" << endl;
        cin >> n;
        switch (n)
        {
        case 0:
        {
            cout << "Thank you!!!!" << endl;
            break;
        case 1:

            Box b1;
            cout << "Default Volume of Box" << endl;
            b1.calvalume();
        }
        break;
        case 2:
        {
            double value;
            cout << "Enter a one value " << endl;
            cin >> value;
            Box b1(value);
            cout << "Volume of the box is" << endl;
            b1.calvalume();
        }
        break;
        case 3:
        {
            double l, w, h;
            cout << "Enter a length,width,height " << endl;
            cin >> l >> w >> h;
            Box b(l, w, h);
            b.calvalume();
        }
        break;
        default:
            cout << "You made A wrong Choice" << endl;
            break;
        }
    } while (n != 0);
}