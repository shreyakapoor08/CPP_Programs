///Input 3 numbers and find value of key such that key is equal to sum of largest digits of all the three numbers
/// subtract it sum of second largest digits(4 digit numbers as input)

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,ld1,sld1,ld2,sld2,ld3,sld3;
    cin>>num1>>num2>>num3;
    ld1 = 1;
    sld1 = 0;
    ld2 = 1;
    sld2 = 0;
    ld3 = 1;
    sld3 = 0;
    while(num1 != 0)
    {
        int r1 = num1 % 10;
        if(ld1 < r1)
        {
            if(sld1 < ld1)
            {
                sld1 = ld1;
                ld1 = r1;
            }

        }
        else if(ld1 > r1 && sld1 < r1)
        {
            sld1 = r1;
        }
        num1 = num1 / 10;
    }
    cout<<"ld1 "<<ld1<<endl;
    cout<<"sld1 "<<sld1<<endl;

    while(num2 != 0)
    {
        int r2 = num2 % 10;
        if(ld2 < r2)
        {
            if(sld2 < ld2)
            {
                sld2 = ld2;
                ld2 = r2;
            }

        }
        else if(ld2 > r2 && sld2 < r2)
        {
            sld2 = r2;
        }
        num2 = num2 / 10;
    }
    cout<<"ld2 "<<ld2<<endl;
    cout<<"sld2 "<<sld2<<endl;

    while(num3 != 0)
    {
        int r3 = num3 % 10;
        if(ld3 < r3)
        {
            if(sld3 < ld3)
            {
                sld3 = ld3;
                ld3 = r3;
            }

        }
        else if(ld3 > r3 && sld3 < r3)
        {
            sld3 = r3;
        }
        num3 = num3 / 10;
    }
    cout<<"ld3 "<<ld3<<endl;
    cout<<"sld3 "<<sld3<<endl;

    int sum_largest = 0;
    sum_largest = ld1 + ld2 + ld3;

    int sum_secondlargest = 0;
    sum_secondlargest = sld1 + sld2 + sld3;

    int key;
    key = sum_largest - sum_secondlargest;

    cout<<"key "<<key<<endl;

}
