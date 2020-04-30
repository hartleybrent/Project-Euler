// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number?
// Brent Hartley

#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num)
{
    bool flag=true;
    for(int i = 2; i <= sqrt(num); i++) 
    {
       if(num % i == 0) 
       {
          flag = false;
       }
    }
    return flag;
}

int main()
{
    int primecount = 0, ans = 0;
    for (int num = 1; primecount <= 10001; num++)
    {
        bool flag;
        flag = isPrime(num);
        if (flag == true)
        {
            primecount = primecount + 1;
        }
        ans = num;
    }
    cout <<"The answer is: " <<ans <<endl;
    return 0;
}