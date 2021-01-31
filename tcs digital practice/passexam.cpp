/* you have M questions and N seconds to complete the test. each ques has some points and take some time to solve.
Find the max marks that can be scored by the student in the given time N.
test case:
4 - number of ques
10 - time to attend
1  2 - 1 mark ques 2 sec to solve
2  3
3  5
4  7 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, h = 10, p = 10;
    int marksarr[n + 1] = { 0, 6, 4, 2, 8 };
    int timearr[n + 1] = { 0, 4, 6, 2, 7 };
    cout << MaximumMarks(marksarr, timearr, h, n, p);

    return  0;
}
