// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible (divisible with no remainder) by all of the numbers from 1 to 20?
// Brent Hartley

// I was going to make this more complex. Factoring, vectors, etc... but it really is a simple problem. 
// Simple problem = simple solution.


#include<iostream>

using namespace std;

int main()
{
    int i = 20;
    int ans = 0;

    cout <<"Caculating...";
    do
    {
        if ((i % 11 == 0) && (i % 12 == 0) && (i % 13 == 0) && (i % 14 == 0) && (i % 15 == 0) && (i % 16 == 0)
            && (i % 17 == 0) && (i % 18 == 0) && (i % 19 == 0) && (i % 20 == 0))
        {
            ans = i;
        }
        else
        {
            i += 20;
        }
    } while (ans == 0);
    cout <<"The answer is: " <<ans <<endl;
    return 0;
}

