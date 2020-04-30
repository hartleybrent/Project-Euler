// The sum of the squares of the first ten natural numbers is,
// 12+22+...+102=385
// The square of the sum of the first ten natural numbers is,
// (1+2+...+10)2=552=3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
// Brent Hartley

#include<iostream>
#include<cmath> // C++ has no built in exponent function. We will use cmath for this.

using namespace std;

long long x = 0, y = 0;

void SquareOfSums() // Caculate square of sums.
{
    for (long long b = 1; b <= 100; b++)
    {
        x = x + b;
    }
    x = pow(x,2);
}

void SumOfSquares() // Caculate sum of squares.
{
    for (int a = 1; a <= 100; a++)
    {
        y = y + (pow(a,2));

    }
}

int main()
{
    SumOfSquares(); // Run caculation functions
    SquareOfSums(); 
    cout <<"The answer is:" <<(x - y) <<endl; // Print answer
}
