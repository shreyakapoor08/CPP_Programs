
#include<iostream>
using namespace std;

int main()
{
int n, i, r1, r2;
cout << "\nEnter the total number of terms : ";
cin >> n;
cout << "\nEnter the common ratio for GP - 1 : ";
cin >> r1;
cout << "\nEnter the common ratio for GP - 2 : ";
cin >> r2;
cout << "\nThe series is\n";
int a = 1, b = 1;
if(n % 2 == 0)
{
for(i = 0; i < n/2; i++)
{
cout << a << " ";
a = a * r1;
cout << b << " ";
b = b * r2;
}
}
else
{
for(i = 0; i < n/2; i++)
{
cout << a << " ";
a = a * r1;
cout << b << " ";
b = b * r2;;
}
cout << a << " ";
}
cout << endl;
}
