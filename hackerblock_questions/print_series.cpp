#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int count=0;
    int term;
    int i=1;

    while(count<n1){

        term = 3*i + 2;
        if(term%n2==0){
            i = i + 1;
            continue;
        }
        cout<<term<<endl;
        i = i + 1;
        count = count + 1;
    }

    return 0;
}
