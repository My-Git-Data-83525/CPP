#include <iostream>
using namespace std;
class Stack
{
private:
    int size;
    int *stackArray;
    int index = -1;

public:
    Stack() : Stack(5) {}
    Stack(int num)
    {
        this->size = num;
        stackArray = new int[size];
    }
    ~Stack()
    {
        delete[] stackArray;
    }
    void push()
    {
            if(isFull()){
                cout<<"Stack is Full"<<endl;
            }
            else{
            int n;
            cout << "Enter a number you want to Push :" << endl;
            cin >> n;
            stackArray[index] = n;
            // cout<<stackArray[index]<<endl;
            index++;
            }
    }
    void pop()
    {
        if (isEmpty())
            cout << "Stack is Empty" << endl;
        else
        index--;
    }
    void peek()
    {
        if(isEmpty())
            cout<<"Stack is Empty"<<endl;
        else
        cout << stackArray[index - 1];
    }
    void printStack()
    {
        for (int i = index; i < 0; i++)
        {
            cout << stackArray[i] << endl;
        }
    }
    bool isEmpty()
    {
        if (index == -1)
            return true;
        else
            return false;

    }
    bool isFull(){
        if (index ==size-1)
            return true;
        else 
            return false;
    }
};
extern int num;

int main()
{
    Stack s(5);
    int n;
    do
    {
        cout << "0. EXIT" << endl;
        cout << "1. PUSH" << endl;
        cout << "2. POP" << endl;
        cout << "3. PEEK" << endl;
        cout << "4. STACK Is full or not" << endl;
        cout << "4. STACK Is Empty or not" << endl;


        cout << "Enter your choice - ";
        cin >> n;
        switch (n)
        {
          case 0:
            cout << "Thank You ..." << endl;
            break;
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
           s.peek();
            break;
        case 4:
           s.isFull();
            break;
        case 5:
           s.isEmpty();
            break;
        default:
            cout << "Wrong choice ..." << endl;
            break;
        }
    } while (n!=0);
    
}
