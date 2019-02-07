#include<iostream>
using namespace std;

int factorial( int no){
    int ans =1;
    for(int i=1;i<=no;i++){
        ans = ans*i;
    }
    return ans;
}

int nCr(int i,int j){
    return factorial(i)/(factorial(i-j)*factorial(j));
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
                cout<< nCr(i,j)<<" ";
            }
        cout<<endl;
    }

    return 0;
}
