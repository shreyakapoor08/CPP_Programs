/*
Given a keypad as shown in diagram, and an N digit number. List all words which are possible by pressing these numbers.



Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line of each test case is N, N is the number of digits. The second line of each test case contains D[i], N number of digits.

Output:
Print all possible words from phone digits with single space in lower case.

Constraints:
1 <= T <= 10
1 <= N <= 10
2 <=  D[i] <= 9

Example:
Input:
1
3
2 3 4

Output:
adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi
*/

#include<iostream>
#include<cstring>
using namespace std;

// hashTable[i] stores all characters that correspond to digit i in phone
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};

// A recursive function to print all possible words that can be obtained
// by input number[] of size n.  The output words are one by one stored
// in output[]
void printWordsUtil(int D[],int curr_digit,char output[], int n)
{
    //Base case, if current output word is prepared
    int i;
    if(curr_digit == n)
    {
        cout<<output;
        return;
    }

    //try all 3 possib;e characters for current digit in D[]
    //and recur for remaining digits
    for(int i=0; i<strlen(hashTable[D[curr_digit]]); i++)
    {
        output[curr_digit] = hashTable[D[curr_digit]][i];
        printWordsUtil(D,curr_digit+1,output,n);
        if(D[curr_digit] == 0 || D[curr_digit] == 1)
            return;
    }
}

// A wrapper over printWordsUtil().  It creates an output array and
// calls printWordsUtil()
void printWords(int D[], int n)
{
    char result[n+1];
    result[n] = '\0';
    printWordsUtil(D,0,result,n);
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int D[n];
        for(int i=0;i<n;i++)
        {
            cin>>D[i];
        }
        printWords(D,n);
        cout<<endl;
    }
    return 0;
}
