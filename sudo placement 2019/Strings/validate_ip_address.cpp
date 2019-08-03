#include<iostream>
#include<cstring>
#include<stdlib.h>
#define DELIM "."
using namespace std;

/* return 1 if string contain only digits, else return 0 */
int valid_digit(char *ip)
{
    while (*ip) {
        if (*ip >= '0' && *ip <= '9')
            ++ip;
        else
            return 0;
    }
    return 1;
}

/* return 1 if IP string is valid, else return 0 */
int isValid(char *ip)
{
    int i, num, dots = 0;
    char *ptr;

    if (ip == NULL)
        return 0;

    // See following link for strtok()
    // http://pubs.opengroup.org/onlinepubs/009695399/functions/strtok_r.html
    ptr = strtok(ip, DELIM);

    if (ptr == NULL)
        return 0;

    while (ptr) {

        /* after parsing string, it must contain only digits */
        if (!valid_digit(ptr))
            return 0;

        num = atoi(ptr);

        /* check for valid IP */
        if (num >= 0 && num <= 255) {
            /* parse remaining string */
            ptr = strtok(NULL, DELIM);
            if (ptr != NULL)
                ++dots;
        } else
            return 0;
    }

    /* valid IP string must contain 3 dots */
    if (dots != 3)
        return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[10000];
        cin>>s;
        cout<<isValid(s)<<endl;
    }
    return 0;
}
