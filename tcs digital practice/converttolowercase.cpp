#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*string str;
    getline(cin,str);
    int n = str.size(); //use this to calc size
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] + 32;
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i];
    } */

    // su is the string which is converted to uppercase
    string su = "Jatin Goyal";

    // using transform() function and ::toupper in STL
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    cout << su << endl;

    // sl is the string which is converted to lowercase
    string sl = "Jatin Goyal";

    // using transform() function and ::tolower in STL
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    cout << sl << endl;
}
