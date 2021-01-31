#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,abc,sum=0,pro=0,a[100][100];
    cin >> n;
    for(int i = 0;i < n;i++)
    {
       for(int j = 0;j < n;j++)
       {
          cin >> a[i][j];
       }
    }
     for(int i = 0;i < n;i++)
     {
       for(int j = 0;j < n;j++)
       {
        if(i==j)
            {
                sum+=a[i][j];

            }

       }
    }
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
           if(i==(n-j-1))
               { pro+=a[i][j];}

       }
    }
    cout<<abs(sum-pro);
    return 0;
}
