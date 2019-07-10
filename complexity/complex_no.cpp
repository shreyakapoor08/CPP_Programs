#include<iostream>
using namespace std;

class ComplexNo{
    int real;
    int img;
public:
    ComplexNo()
    {
        real = 0;
        img = 0;
    }
    ComplexNo(int r,int i)
    {
        real = r;
        img = i;
    }

    void input()
    {
        cin>>real>>img;
    }
    void print()
    {
        if(img>=0)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        else
            cout<<real<<" - "<<-1*img<<"i"<<endl;

    }

    void operator+(ComplexNo &c2)
    {
        real += c2.real;
        img += c2.img;
    }
    void operator!()
    {
        img *= -1;
    }
    int operator[](string s)
    {
        if(s=="real")
        {
            return real;
        }
        else{
            return img;
        }
    }
};

ostream& operator<<(ostream&o1, ComplexNo&o2) //o1 is ref var to cout
{
    o2.print();
    return o1;
}
/*istream& operator>>(stream&o1, ComplexNo&o2) //o1 is ref var to cout
{
    o2.print();
    return o1;
}
*/

int main()
{
    ComplexNo c1(1,2);
    //c1.print();

    cout<<c1;

    ComplexNo c2;
    c2.input();
    c2.print();

    c1 + c2;
    //c1.print();
    cout<<c1<<c2;
    !c1; //conjugate
    c1.print();

    cout<<"Real part is "<<c1["real"];

    return 0;
}
