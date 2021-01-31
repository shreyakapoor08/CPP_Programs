#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k=0,l=0;
    /* k - starting row index
        row - ending row index
        l - starting column index
        col - ending column index
        i - iterator
    */
    int row,col;
    cin>>row>>col;
    int input[100][100];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>input[i][j];
        }
    }
    while(k<row && l<col){
        //print 1st row
        for(int i=l;i<col;i++){
            cout<<input[k][i]<<" ";
        }
        k++;

        //print last col
        for(int i=k;i<row;i++){
            cout<<input[i][col-1]<<" ";
        }
        col--;

        //print last row from remaining rows
        if(k<row){
            for (i = col-1; i >= l; --i)
            {
                cout<<input[row-1][i]<<" ";
            }
            row--;
        }
        /* Print the first column from the remaining columns */
        if (l < col)
        {
            for (i = row-1; i >= k; --i)
            {
                cout<<input[i][l]<<" ";
            }
            l++;
        }
    }
    return  0;
}
