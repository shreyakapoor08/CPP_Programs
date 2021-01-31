#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > v;

   //int m;
    /*for(int i=0;i<n;i++){
        m = v[i].size(); //number of col;
    } */

    /*for(int i=0;i<n;i++){
        v[i].push_back(i);
        v[i].push_back(i*i);
    } */
    int input;
    for(int i=0;i<2;i++){
            vector<int> v1;
        for(int j=0;j<2;j++){
            cin>>input;
            v1.push_back(input);
        }
    v.push_back(v1);
    }
    int n = v.size(); //denotes number of rows
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
