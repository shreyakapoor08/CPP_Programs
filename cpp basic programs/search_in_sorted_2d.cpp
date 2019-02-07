#include<iostream>
using namespace std;

void search(int a[][10],int rows,int cols,int key){
    int x=0,y=cols-1;
    while(x<=rows && y>=0){
        if(a[x][y]==key){
            cout<<"Found at index "<<x<<" "<<y<<endl;
            return;
        }
        else if(a[x][y]>key){
            y--;
        }
        else{
            x++;
        }
    }
    cout<<"Not found";
    return;
}
int main()
{
    int a[10][10] = {{1,3,5,7},{2,8,10,12},{4,9,11,16},{6,13,15,18}};

    int rows=4,cols=4;
    int key;
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    search(a,rows,cols,key);


    return 0;
}
