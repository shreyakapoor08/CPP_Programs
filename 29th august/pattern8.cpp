#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        ///Spaces
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }

        ///Inc nos
        int no=i;
        for(int s=1;s<=i;s++){
            cout<<no<<"";
            no++;
        }

        ///dec nos
        no=2*i-2;
        for(int s=1;s<i;s++){
            cout<<no<<"";
            no--;
        }
        cout<<endl;
    }
}

