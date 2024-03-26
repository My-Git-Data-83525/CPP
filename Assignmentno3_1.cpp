#include <iostream>
using namespace std;
class Cylinder
{
private:
    double radius;
    double height;
    const static double PI;

public:
    Cylinder(double radius, double height)
    {
        this->radius = radius;
        this->height = height;
    }
    Cylinder() : Cylinder(5, 6) {}

    Cylinder(double value) : height(value), radius(value) {}
    
    static double getPI()
    {
        return PI;
    }
    double getRadius() const
    {
        return radius;
    }
    double getHeight()
    {
        return height;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double calVolume()
    {
        return PI * height * radius * radius;
    }
    void getVolume()
    {
        cout << calVolume() << endl;
    }
};
const double Cylinder::PI = 3.14;
int main()
{
    Cylinder c1(6, 4);
    c1.calVolume();
    c1.getVolume();
    c1.getHeight();
    c1.getRadius();
    c1.getPI();
    c1.setHeight(5.5);
    c1.setRadius(7.5);
}