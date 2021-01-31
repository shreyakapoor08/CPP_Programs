#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

int main()
{
    string str1 = "GeeksforGeeks";
    leftrotate(str1, 2);
    cout << str1 << endl;

    string str2 = "GeeksforGeeks";
    rightrotate(str2, 2);
    cout << str2 << endl;
    return 0;
}
