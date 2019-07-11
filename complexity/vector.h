#include<iostream>
using namespace std;

class Vector
{
    int *arr;
    int cs;
    int ms;

public:
    Vector(int ds = 4)
    {
        cs = 0;
        ms = ds;
        arr = new int[ms];
    }

    void push_back(int d)
    {
        if(cs==ms)
        {
            //expand the vector to twice its size
            int *oldArr = arr;
            ms = ms*2;
            arr = new int[ms];

            for(int i=0;i<cs;i++)
            {
                arr[i] = oldArr[i];
            }
            delete [] oldArr;

        }
        arr[cs] = d;
            cs++;
    }
    void pop_back()
    {
        if(cs>0)
        {
            cs--;
        }
    }
    void print()
    {
        for(int i=0;i<cs;i++)
        {
            cout<<arr[i]<<",";
        }
    }

    int getIth(int i)
    {
        return arr[i];
    }
    int operator[](int i)
    {
        return arr[i];
    }
    void operator!()
    {
        for(int i=0;i<cs;i++)
        {
            arr[i] *= -1;
        }
    }
};

ostream& operator<<(ostream&os,Vector &v1)
{
    v1.print();
    return os;
}
istream& operator>>(istream&is,Vector &v1)
{
    int d;
    cin>>d;
    while(d!=-1)
    {
        v1.push_back(d);
        cin>>d;
    }
    return is;
}
