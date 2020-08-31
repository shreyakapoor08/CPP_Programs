#include<iostream>
#include<cstring>
using namespace std;

void reverse(char *a)
{
    int len = strlen(a);
    int i=0,j=len-1;

    while(i<j){
        swap(a[i],a[j]);
        i++;j--;
    }
}

int main(){
char a[100] = "apple";
reverse(a);
cout<<a<<endl;
char b[100];
cin.getline(b,100);
reverse(b);
cout<<b;

}
