#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int det2 = b*b - 4*a*c;

    if(det2>0){
        cout<<"Real and Distinct"<<endl;

        float r1,r2;
        r1 = (-1*b - sqrt(det2))/2*a;
        r2 = (-1*b + sqrt(det2))/2*a;

        cout<<r1<<" "<<r2<<endl;
    }
    else if(det2==0)
    {
        cout<<"Real and Equal"<<endl;
        float r1 = -1*b/2*a;
        cout<<r1<<" "<<r1<<endl;
    }
    else{
        cout<<"Imaginary"<<endl;
    }
    return 0;
}
