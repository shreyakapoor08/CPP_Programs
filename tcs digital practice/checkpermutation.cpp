#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input1,input2;
    int flag = 1;
    //cin.get();
    getline(cin,input1);
    cout<<"input1 "<<input1<<endl;
    getline(cin,input2);
    cout<<"input2 "<<input2<<endl;
    int m = input1.size();
    int n = input2.size();
    if(m!=n){
        flag = 0;
    }
    sort(input1.begin(), input1.end());
    sort(input2.begin(), input2.end());
    for(int i=0;i<m;i++){
        if(input1[i]!=input2[i]){
            flag = 0;
        }
    }
    if(flag == 0){
        cout<<"No";
    }
    else{
        cout<<"yes";
    }

}
