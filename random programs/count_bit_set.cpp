#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;
    int ans=0;

    for( ;no>0;no>>=1)
    {
        ans = ans + (no&1);
    }
    cout<<"No of setbits "<<ans<<endl;

return 0;
}
