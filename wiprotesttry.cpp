#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float b1,h1,b2,h2;
    float area1,area2;
    cin>>b1>>h1;
    cin>>b2>>h2;

    area1 = (b1*h1)/2;
    area2 = (b2*h2)/2;
    cout<<"area1 "<<area1<<endl;
    cout<<"area2 "<<area2<<endl;

    if(area1>area2)
    {
        cout<<fixed<<setprecision(6)<<area1;
    }
    else{
        cout<<fixed<<setprecision(6)<<area2;
    }
    return 0;
}
