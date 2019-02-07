#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }

    return ans;

}

///Binomial Coefficient nCr
int nCr(int n,int r){
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}

///Pascals Triangle
void printPascalTri(int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){

            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){

    cout<<fact(5)<<endl;
    cout<<nCr(5,3)<<endl;
    printPascalTri(5);

return 0;
}
