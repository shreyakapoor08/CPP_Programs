#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=0;
    while(i*i<=n){
        i=i+1;
    }
    ///when i comes out of while, i*i is greater than n
    ///just smaller value whose square is just less than or equal to n is
    int ans=i-1;
    cout<<ans;






    return 0;

}
