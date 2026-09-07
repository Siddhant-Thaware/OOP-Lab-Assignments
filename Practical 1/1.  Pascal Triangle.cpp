/*
Name: Siddhant Thaware
PRN: B25ET1056
Batch: C1
*/

#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int p)
{
    int res = 1;

    for(int i = p; i > 1; i--)
    {
        res *= i;
    }

    return res;
}

// Function to calculate binomial coefficient
int Binocoef(int n, int r)
{
    int coef;

    coef = fact(n) / (fact(r) * fact(n-r));

    return coef;
}

// Function to print Pascal Triangle
void printTriangle(int n)
{
    for(int l = 0; l < n; l++)
    {
        for(int m = 0; m <= l; m++)
        {
            cout << "\t" << Binocoef(l, m);
        }

        cout << "\n";
    }
}

int main()
{
    int n;

    cout << "enter the no. of rows:";
    cin >> n;

    printTriangle(n);

    return 0;
}
