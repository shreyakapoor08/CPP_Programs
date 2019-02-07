#include<iostream>
using namespace std;

int fact(int n){
    ///Base case
    if(n==0)
    {
        return 1;
    }

    ///Recursive case
    int ans = n*fact(n-1);
    return  ans;
}

int main()
{   ///saare variable stack mai bante hai
    ///harr ek function ki stack space diff hoti hai though stack ek hi hota hai
    cout<<fact(5)<<endl;
    cout<<fact(6)<<endl;

    return 0;
}
