// Euler Project - Problem 4
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-number numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-number numbers.
// Brent Hartley

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool palindrome(int number) // Reverse the number generated in main and determine if it's a palindome.
{                           // if number is palindrome, return true.
    int num, rev = 0;
    num = number;

    while(num > 0) 
    { 
        rev = ((rev * 10) + (num % 10)); 
        num = (num / 10); 
    }
    if (rev == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int>palindromes = {};

    for (int a = 100; a < 999; a++)
    {
        for (int b = 100; b <999; b++)
        {
            int number = (a * b);
            if (palindrome(number)) 
            {                                   // Send number to function palindrome, and if the palindrome function returns true, add it to palindromes vector.
                palindromes.push_back(number);
            }
        }
    }
    int answer = *max_element(palindromes.begin(), palindromes.end()); // Find the largest element in the palindrome vector. That is our answer.
    cout <<"The largest palindrome that is the product of 2 three digit numbers is : " <<answer <<endl;

    return 0;
}