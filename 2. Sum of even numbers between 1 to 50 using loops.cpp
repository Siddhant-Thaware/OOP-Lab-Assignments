#include <iostream>
using namespace std;

class Number
{
private:
    int evenSum, oddSum;

public:
    Number()
    {
        evenSum = 0;
        oddSum = 0;
    }

    void calculate()
    {
        for (int i = 1; i <= 50; i++)
        {
            evenSum += 2 * i;       // First 50 even numbers
            oddSum += (2 * i - 1);  // First 50 odd numbers
        }
    }

    void display()
    {
        cout << "Sum of first 50 even numbers = " << evenSum << endl;
        cout << "Sum of first 50 odd numbers = " << oddSum << endl;
    }
};

int main()
{
    Number obj;

    obj.calculate();
    obj.display();

    return 0;
}
