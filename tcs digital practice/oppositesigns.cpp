#include<bits/stdc++.h>
using namespace std;

bool oppositeSigns(int x,int y){
return((x^y)<0);
}

int main()
{
    int x=100,y=-100;
    if(oppositeSigns(x,y)==true){
        cout<<"opposite signs";
    }
    else{
        cout<<"niot";
    }
}
