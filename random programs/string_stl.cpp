#include<iostream>
using namespace std;

int main(){


string s;

//cin>>s;
getline(cin,s);  ///input a sentence
cout<<s<<endl;


///Suppose I want to create a array of strings
string s1[10] = {"Apple","Apple Shake","Mango","Mango shake"};

for(int i=0;i<4;i++){
   // cout<<s1[i] <<endl;
    //we can also use length() function instead of size()
    for(int j=0; j<s1[i].size();j++){
        cout<<s1[i][j]<<" "; ///jth character of ith string
    }
}

return 0;
}
