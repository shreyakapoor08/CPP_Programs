#include<iostream>
#include<cstring>
using namespace std;

//to return value of a char.
int val(char c)
{
    if(c>='0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

//function to convert a number base 'b' to decimal
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1; //initialise power of base
    int num = 0; //initialise resu;t
    int i;

    //decimal equivalent
    for(i = len-1;i >= 0; i--)
    {
        //a digit in input number must be
        //less than number's base
        if(val(str[i]) >= base)
        {
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

int main()
{
    char str[10005];
    cin>>str;
    int base;
    cin>>base;
    cout<<toDeci(str, base);
}
