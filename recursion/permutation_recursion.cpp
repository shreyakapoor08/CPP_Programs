#include<iostream>
using namespace std;

void printPermuation(char *a,int i)
{
    if(a[i]=='\0'){
        cout<<a<<endl;
        return;
    }

    ///rec case
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        printPermuation(a,i+1);

        ///undo the swap to restore the original array
        ///this is called backtracking
        swap(a[i],a[j]);
    }
}

int main()
{   char input[10] = "abc";
    printPermuation(input,0);
}
