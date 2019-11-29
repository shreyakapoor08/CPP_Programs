#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,d;
        cin>>n>>d;
        int car[n];
        int penalty[n];
        for(int i=0;i<n;i++)
            cin>>car[i];
        for(int i=0;i<n;i++)
            cin>>penalty[i];
        bool flag = d&1; //odd
        long long int ans = 0;

        for(int i=0;i<n;i++)
        {
            if(flag && !(car[i]&1))
            {
                ans += penalty[i];
            }
            else if( !flag && (car[i]&1))
            {
                ans += penalty[i];
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}


