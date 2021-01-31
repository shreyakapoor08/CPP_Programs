#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin,input);

    int k = input.size();

    reverse(input.begin(),input.end());

    int wordstart=0;
    for(int i=0;i<=k;i++){

        if(input[i]==' ' || input[i]=='\0'){
                int start=wordstart;
            int end=i-1;
            while(start<end)
            {
                int temp= input[start];
                input[start]=input[end];
                input[end]=temp;
                start++;
                end--;
            }
            wordstart=i+1;

        }
    }

    cout<<input;
    return 0;
}
