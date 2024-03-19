#include<iostream>
using namespace std;
class Student{
       private:
            int roll_no;
            string name;
            double marks;
        public:
            void initStudent(){
                roll_no=1;
                name="ABC";
                marks=0.00;
            }
            void printStudenOnConsole(){
                cout<<"Student Details"<<roll_no<<endl<<name<<endl<<marks<<endl;
            }
            void acceptStudentFromConsole(){
                cout<<"Enter a roll number"<<endl;
                cin>>roll_no;
                cout<<"Enter name of Student"<<endl;
                cin>>name;
                cout<<"Enter Marks of Student"<<endl;
                cin>>marks;
            }
};
int main()
{
    Student s;
    int n;
    do
    {
        cout<<"Enter a choice:"<<endl;
        cin>>n;
        cout<<"0. Exit"<<endl;
        cout<<"1. Initialise Student:"<<endl;
        cout<<"2. show Student Information:"<<endl;
        cout<<"3. Accept Student information:"<<endl;
        switch (n)
        {
        case 0:
            cout<<"Thank You!!!"<<endl;
            break;
        case 1:
            s.initStudent();
            break;
        case 2:
            s.printStudenOnConsole();
        case 3:
            s.acceptStudentFromConsole();
            break;
        default:
            cout<<"Sorry you have Wrong Choice"<<endl;
            break;
        }
    } while (n!=0);
    
}