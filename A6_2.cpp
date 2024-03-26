#include <iostream>
using namespace std;
class Product
{
private:
    int id;
    string title;
    double price;

public:
    int getId()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    string getTitle()
    {
        return this->title;
    }
    void setTitle(string title)
    {
        this->title = title;
    }
    double getPrice()
    {
        return this->price;
    }
    void setPrice(double price)
    {
        this->price = price;
    }
    Product()
    {
    }
    virtual void accept()
    {
        // cout << "Enter Product Id :" << endl;
        // cin >> id;
        // getchar();
        // cout << "Enter title of Product :" << endl;
        // getline(cin, title);
        cout << "Enter price Of Product :" << endl;
        cin >> price;
    }
    virtual void display()
    {
        cout << "Product Id :" << id << endl;
        cout << "title of Product :" << title << endl;
        cout << "price Of Product :" << price << endl;
    }
};
class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        this->author = "Ambani";
    }
    void accpet()
    {
        Product::accept();
        getchar();
        cout << "Enter a Author name :" << endl;
        getline(cin, author);
        cout << "Book is Added" << endl;
    }
    void display()
    {
        display();
        cout << "Name of Author :" << author << endl;
    }
};
class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        this->artist = "ABCD";
    }
    void accept()
    {
        Product::accept();
        getchar();
        cout << "enter name of artist :" << endl;
        getline(cin, artist);
        cout << "Tape is added" << endl;
    }
    void display()
    {
        display();
        cout << "Name of author :" << artist << endl;
    }
};
int main()
{
    int n;
    int index = 0;
    Product *p[3];
    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Add A book" << endl;
        cout << "2. Add A Tape" << endl;
        cout << "3. Show the Bill" << endl;
        cout << "Enter Your choice : " << endl;
        cin >> n;
        switch (n)
        {
        case 0:
            cout << "Thank you For the Shopping" << endl;
            break;
        case 1:
        {
            if (!(index<3))
            {
            cout << "Book details :";
            p[index] = new Book;
            p[index]->accept();
            p[index]->setPrice((p[index]->getPrice())-(p[index]->getPrice()*0.05));
            index++;            
            }
            else
            cout<<"You have already Added 3 Product..... "<<endl;
        }
        break;
        case 2:
        {
            if (!(index<3))
            {
            cout<<"You have already Added 3 Product..... "<<endl;
            // cout << index;
            cout << "Tape Details :" << endl;
            p[index] = new Tape;
            p[index]->accept();
            p[index]->setPrice((p[index]->getPrice())-(p[index]->getPrice()*0.1));
            index++;
            }
            else
            cout<<"You have already Added 3 Product..... "<<endl;
       
            }
            
        break;
        case 3:
        {
            double total = 0;
            for (int i = 0; i < index; i++){
            total+=p[i]->getPrice();
            }
            cout<<"+++++++++++++++++++++++++++++++++++++"<<endl;
            cout << "Total Price :" << total << endl;
            cout<<"+++++++++++++++++++++++++++++++++++++"<<endl;
        }

        break;
        default:
            cout << "Wrong choice....";
            break;
        }

    } while (n != 0);
    delete[] p;
    p=NULL;
}
