#include<iostream>
using namespace std;
class Date 
{
private:
    int yy;
    int mm;
    int dd;
public:
    void initDate(){
        dd=01;
        mm=01;
        yy=0000;
    }
    void printDateOnConsole(){
        cout<<"Date:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
    void acceptDateFromConsole(){
        cout<<"Enter a day:"<<endl;
        cin>>dd;
        cout<<"Enter a month:"<<endl;
        cin>>mm;
        cout<<"Enter a year:"<<endl;
        cin>>yy;
    }
    bool isLeapYear(){
        if ((yy%4==0 && yy%100!=0)|| yy%400==0)
            return true;
        else
            return false;
        
    }
};
int main(){
    
    Date d1;
    int n;
    
    do{
    
    cout<<endl<<"0. Exit"<<endl;
    cout<<"1. Initialise Date"<<endl;
    cout<<"2. Print Date"<<endl;
    cout<<"3. Accept Date"<<endl;
    cout<<"4. check Leap"<<endl;
    cout<<"Enter a choice:"<<endl;
    cout<<"++++++++++++++++++++++++++++"<<endl;
    cin>>n;

    switch (n)
    {
    case 0:
        printf("Thank you!!!!");
        break;
    case 1:
        d1.initDate();
        break;
    case 2:
        d1.printDateOnConsole();
        break;
    case 3:
        d1.acceptDateFromConsole();
        break;
    case 4:
    if (d1.isLeapYear())
                    cout << "Leap Year\n";
                else
                    cout << "Not a Leap Year\n"; 
                    break; 
    default:
        cout<<"you made a wrong Choice"<<endl;
        break;
    }
    cout<<"=====================";
    
    }while(n!=0);
}