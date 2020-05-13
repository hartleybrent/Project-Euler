// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.
// Brent Hartley

#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int num)
{
    bool primeflag = true;
    for (int i = 2; i <= sqrt(num); i++) 
    {
       if(num % i == 0) 
       {
          primeflag = false;
       }
    }
    return primeflag;
}

int main()
{
    long long ans = 1;
    cout <<"Caculating..." <<endl;
    for (int num = 1; num <= 2000000; num += 2)
    {
        bool primeflag = is_prime(num);
        if (primeflag == true)
        {
            ans = ans + num;
        }
    }
    cout <<"The answer is: " <<ans <<endl;
    return 0;
}

