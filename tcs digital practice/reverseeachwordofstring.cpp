#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    getline(cin,input);
    int i=0,wordstart=0,n;
    n=input.size();
    cout<<"n "<<n<<endl;
    for(i=0;i<=n;i++)
    {

        if(input[i]==' ' || input[i]=='\0')
        {
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
    for(int i=0;i<n;i++){
        cout<<input[i];
    }

    return 0;
}
