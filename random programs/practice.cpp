#include<iostream>
using namespace std;

int main()
{
   string str;
   cin>>str;

   j = strlen(str) - 1;
   for(i=0;i<j;i++,j--)
   {
       temp = str[i];
       str[i] = str[j];
       str[j] = temp;
   }

}
