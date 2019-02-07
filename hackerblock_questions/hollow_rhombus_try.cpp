#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //First ROw
    for(int i=0;i<n-1;i++){
        cout<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;

    //Beech ki rows
    for(int i=2;i<=n-1;i++){
        //Spaces n-i
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    //Last row
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    return 0;
}
