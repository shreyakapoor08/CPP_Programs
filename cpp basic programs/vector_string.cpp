#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

int main()
{
    vector<string> vs;

    string s;
    getline(cin,s);

    while(s!="-1")
    {
        vs.push_back(s);
        getline(cin,s);
    }

    sort(vs.begin(),vs.end());

    //print
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }

    return 0;
}
