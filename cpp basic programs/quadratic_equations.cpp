#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    float d = sqrt(b*b - 4*a*c);
    float ans;
    float denom = 2*a;
    if(d>0)
    {  float ans1 = ((-1 * b) - d)/denom,ans2 = ((-1*b) + d)/denom ;
        cout<<"Real and Distinct"<<endl;
        cout<<ans1<<" "<<ans2;
    }
    else if(d==0)
    {   float ans1 = (-1* b)/denom;
        cout<<"Real and Equal"<<endl;
        cout<<ans1<<" "<<ans1;
    }
    else
    {
        cout<<"Imaginary"<<endl;
    }
    return 0;
}
