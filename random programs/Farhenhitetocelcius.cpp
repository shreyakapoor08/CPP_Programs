#include<iostream>
using namespace std;

int main()
{
    int initialv,finalv,step;
    cin>>initialv>>finalv>>step;

    int f = 0,c;
    while(f<=finalv)
    {
        c = 5*(f-32)/9;
        cout<<f<<" "<<c<<endl;
        f = f+step;
    }
    return 0;
}
