#include<bits/stdc++.h>
using namespace std;

int main()
{

    int row,col;
    cin>>row>>col;
    int input[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>input[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++)
            {
                cout<<input[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<input[i][j]<<" ";
            }
        }
    }

    return 0;
}
