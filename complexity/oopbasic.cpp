#include<iostream>
#include<string>
using namespace std;

///class is just a piece of code representing how a car bucket will look like
class Car{
/*private:
    char name[13];
    int price;
*/
    public:
        ///this is your default constructor which is hidden by default
        Car()
        {
            cout<<"making one car"<<endl;
        }
    char name[20]; ///ek string jismai 100 character ho sakte hai
    //char[18]; allocation 4 4 ke size mai ho raha hai so ans is 24
    //char name[13]; 13 + 4 = 17 , 17 ka nearest multiple of 4 is 20
    int price;

    //if class doesnt contain any data members then the output will be 1
    //size of an empty class obj is 1

    //function that can operate on class data member
    /*void setName(char *n)
    {
        strcpy(name,n);
    } */
    void print()
    {
        cout<<"name : "<<name<<endl;
        cout<<"price : "<<price<<endl;
    }

    //setters
    void setPrice(int p)
    {
        if(p>2000)
        {
            price = p;
        }
        else{
            price = 2000;
        }

    }
    int getPrice()
    {
        return price;
    }
};

int main()
{
    Car A; // A is obj of that class, and object take memory
    cout<<sizeof(A)<<endl; //20 bytes for name and 4 byte for price

    A.price = 100;
//    strcpy(A.name, "Ferrari");

    A.name[0] = 'b';
    A.name[1] = 'm';
    A.name[2] = 'w';
    A.name[3] = '\0';

    cout<<A.name<<endl;;
    cout<<A.price<<endl;
//    A.setName("Audi");
    A.setPrice(250);
    A.print();
    ///print price
    cout<<A.getPrice()<<endl;

    Car B; //line calls the constructor of the class
}
