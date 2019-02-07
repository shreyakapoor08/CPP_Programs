#include<iostream>
using namespace std;

void print(int a[][10],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void search(int a[][10],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(a[i][j]==key){
                cout<<"Found  at row "<<i<<" and column "<<j<<endl;

            }
        }
        cout<<endl;
    }
}

int main()
{
    int a[10][10] = {0};

    int rows,cols,key;
    cin>>rows>>cols;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    print(a,rows,cols);
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    search(a,rows,cols,key);


    return 0;
}
