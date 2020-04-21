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

// But there's a much better way... 

// Since 600851475143 is odd - all of its factors are odd. 
// Starting at 3, we will iterate through odd numbers until we find the first factor. 
// We will divide by the first factor (71). X now equals the answer to this which is 8462696833. 
// Starting at 73 (71 + 2), we will iterate through odd numbers to find the next factor of x. 
// Which is 839. Now 8462696833/839 = 10086647. 
// Now iterating through odd numbers starting at 841 the next factor of 10086647 is 1471. 
// 10086647 / 1471 is 6857.  
// From 6857 we iterate the next odd number which is 6859. 
// That answer is less than 1, so we break out of the for loop, subtract 2 from i (6859-2 to negate the +=2 operation in 
// the loop.) 
// And our answer is 6857. 