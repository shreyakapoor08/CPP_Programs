#include<iostream>
#include<cstring>
using namespace std;

class Car
{
public:
    char *name; ///dynamic data member
    int price;

    Car()
    {
        name = NULL;
        price = 0;
    }
    Car(char *n, int p)
    {
        name = new char[strlen(n) + 1]; //name pointing to character array
        strcpy(name,n);
        price = p;
    }
    //copy const to make deep copy
    //instead of copying the pointer we will copy the content
    Car(Car &X)
    {
        name = new char[strlen(X.name) + 1];
        strcpy(name,X.name); //copying content of array without changing the array
        //name = X.name;
        price = X.price;
    }

    //copy assignment operator to make a deep copy
    void operator = (Car &X)
    {
        name = new char[strlen(X.name) + 1];
        strcpy(name,X.name); //copying content of array without changing the array
        //name = X.name;
        price = X.price;
    }

    //overload other operator like [], +  etc.we can overload all arithmatic operator
    /*void operator+(Car &X)
    {
        char *oldName = name;
        int l1 = strlen(name);
        int l2 = strlen(X.name);

        name = new char[l1 + l2 + 1];
        strcpy(name,oldName);
        strcpy(name+l1,X.name);

        delete [] oldName;

        price += X.price;
    } */

    ///return by reference
    Car& operator+(Car &X)
    {
        Car *n = new Car;
        int l1 = strlen(name);
        int l2 = strlen(X.name);

        n->name = new char[l1+l2+1];

        strcpy(n->name,name);
        strcpy(n->name+l1,X.name);

        n->price = price + X.price;

        return *n
    }

    void print()
    {
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<endl;
    }
    ~Car()
    {
        cout<<"destroying car "<<name; //jo baad mai banti hai vo pehle destroy hogi
        if(name!= NULL)
        {
            delete [] name;
        }
    }

};

int main()
{
    Car *x = new Car("X", 200);
    x->print(); //pointer ke sath arrow, obj ke sath dot
    cout<<x->name<<endl;
    delete x;

    Car A("BMW",100);
    //A.print();

    Car B(A); //car b is a copy of a
    //B.print();
    B.name[0] = 'C';
    B.price = 200;

    A.print();
    B.print();

    A+B;
    A.print();

    Car C;
    C = A + B;
    C.print();
    return 0;
}
