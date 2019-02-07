#include<iostream>
using namespace std;

int main()
{
    cout<<"*********"<<endl;

    int n = 4;
    for(int i=0;i<n;i++){
        //stars :- n-i
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        //Spaces
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }

        //Stars :- n-i
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int space=5;
    for(int line=2;line<=4;line++){
        for(int j=0;j<line;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space = space -2;
        for(int j=0;j<line;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"*********"<<endl;
return 0;
}
