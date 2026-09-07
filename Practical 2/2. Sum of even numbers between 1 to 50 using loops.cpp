/*
Name: Siddhant Thaware
PRN: B25ET1056
Batch: C1
Practical: 2
Program: Sum of Even Numbers
*/

#include <iostream>
using namespace std;

// Class to calculate the sum of even and odd numbers
class Number
{
private:
    // Variables to store the sum of even and odd numbers
    int evenSum, oddSum;

public:
    // Default constructor to initialize both sums to zero
    Number()
    {
        evenSum = 0;
        oddSum = 0;
    }

    // Function to calculate the sum
    void calculate()
    {
        // Loop to calculate the sum of the first 50 even and odd numbers
        for (int i = 1; i <= 50; i++)
        {
            // Add even numbers to evenSum
            evenSum += 2 * i;

            // Add odd numbers to oddSum
            oddSum += (2 * i - 1);
        }
    }

    // Function to display the calculated sums
    void display()
    {
        // Display the sum of first 50 even numbers
        cout << "Sum of first 50 even numbers = " << evenSum << endl;

        // Display the sum of first 50 odd numbers
        cout << "Sum of first 50 odd numbers = " << oddSum << endl;
    }
};

// Main function
int main()
{
    // Create an object of Number class
    Number obj;

    // Call calculate function
    obj.calculate();

    // Call display function
    obj.display();

    return 0;
}

