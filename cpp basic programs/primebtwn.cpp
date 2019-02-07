#include<iostream>
using namespace std;

int main()
{   int no;
    //cout<<"enter the number"<<endl;
    //cin>>no;
    int i;
    int range;
    cin>>range;
    for(no=1;no<=range;no++)
    {
       for(i=2;i<=no-1;i++)
    {
        if(no%i==0)
        {
            //cout<<"Not prime"<<endl;
            break;
        }
    }
    if(i==no)
    {
        cout<<no<<" ";
    }
    }

    cout<<"Thanks"<<endl;

return 0;

}
