#include <iostream>
using namespace std;

int main()
{
    /*char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str; //programming is fun.
    cout << "You entered: "<<str<<endl; //programming cz space " " is considered as a terminating character.
*/
    //C++ String to read a line of text
    char str2[100];
    cout << "Enter a string 2: ";
    cin.get(str2, 100);

    cout << "You entered 2: " << str2 << endl;

    //Unlike using char arrays, string objects has no fixed length, and can be extended as per your requirement.
    string fullName;
cout << "Type your full name: ";
getline (cin, fullName); // to take full input
cout << "Your name is: " << fullName;

    return 0;
}
