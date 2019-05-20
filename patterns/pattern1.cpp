#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;
    int i=1;
    while(i<=rows)
    {
        int no;
        if(i%2==1) //if number of rows is odd
        {
            no=1;
        }
        else // if number of rows is even
        {
            no=0;
        }
        int j=1;
        while(j<=i)
        {
            cout<<no<<" ";

            no = 1-no;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
