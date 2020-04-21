// Euler Project - Problem 
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143?
// Brent Hartley //

#include <iostream>
using namespace std;


int main() 
{
    long long i, x = 600851475143;
    cout <<"We will find the greatest prime factor of " <<x <<endl;
    for (i = 3; x > 1; i += 2)
        while (x % i == 0)
            x /= i;
    cout <<"The greatest prime factor of " <<600851475143 <<" is " <<i -2 <<endl;
    return 0;
}
// This one took me a while. First I brute forced all factors, added to vector, checked for prime, and displayed
// the largest number in the vector. It took, well, a long time. 

// But there's a much better way..

// Since 600851475143 is odd - all of its factors are odd. 
// Starting at 3, we will iterate through odd numbers until we find the first factor. 
// We divide x by the factor each time, dramatically reducing the number of operations we need to perform.
// Once X is less than 1, we break out of the loop and subtract 2 from i to get the previous factor which is the
// largest prime factor.
// This runs in less than 1 second - vs 3.5+ hours for brute force (in WSL VM, native would be faster.)

// For info on prime factors, visit: https://www.geeksforgeeks.org/prime-factor/
// and https://www.geeksforgeeks.org/n-th-prime-factor-of-a-given-number/?ref=rp
