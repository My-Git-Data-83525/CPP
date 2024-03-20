#include <iostream>
using namespace std;
class Address
{
private:
    string Bulding;
    string street;
    string city;
    int pin;

public:
    Address() : Address("ABC", "MG Road", "Pune", 411010) {}
    Address(string Bulding, string street, string city, int pin)
    {
        this->Bulding = Bulding;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }
    string getBuilding()const
    {
        return Bulding;
    }
    string getstreet() const
    {
        return street;
    }
    string getCity() const
    {
        return city;
    }
    int getPin() const
    {
        return pin;
    }
    void setBuilding(string Bulding)
    {
        this->Bulding = Bulding;
    }
    void setstreet(string street)
    {
        this->street = street;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    void setPin(int pin)
    {
        this->pin = pin;
    }
    void accpetAddress(){
        cout<<"Enter Bulding Name:\n";
        cin>>Bulding;
        cout<<"Enter street name\n";
        cin>>street;
        cout<<"Enter City name:\n";
        cin>>city;
        cout<<"Enter a PINCODE of ypur City:\n";
        cin>>pin;
    }
    void displayAddress() const
    {
        cout<<"Bulding Name:"<<Bulding<<endl;
        cout<<"Street:"<<street<<endl;
        cout<<"City name:"<<city<<endl;
        cout<<"Pincode:"<<pin<<endl;
    }
};
int main()
{
    Address a;
    a.setBuilding("Sadashiv Apt");
    a.setCity("Satara");
    a.setPin(415002);
    a.setstreet("saniwar peth");
    a.accpetAddress();
    a.displayAddress();
    a.getBuilding();
    a.getCity();
    a.getPin();
    a.getstreet();
}