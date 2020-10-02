#include<iostream>
using namespace std;

int main()
{
    char str[] = "Limricks";
    char *s;
    s = &str[6]-6;
    while(*s)
        cout<<*s++;

    return 0;
}
