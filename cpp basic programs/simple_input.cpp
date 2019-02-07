#include<iostream>
using namespace std;

int main()
{
    int n=0;
    int sum=0;
    int num;
    while(n<5)
    {
        cin>>num;
        sum += num;
        n = n+1;
        if(sum<0)
        {
           break;
        }
        else{
          cout<<num<<endl;
        }

    }

       return 0;
}
