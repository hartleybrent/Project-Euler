// Euler Project - Problem 2 //
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. //
// Brent Hartley //


#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int count = 0, limit = 0;
unsigned long long F1 = 0, F2 = 1, F3 = 0;
vector<unsigned long long> fibevens;

void calcfib()
{
    cout <<"I will caculate sum of all even fibonacci numbers whose value does not exceed the limit. Euler #2 calls for 4 million. Please give me a limit :" <<endl;
    cin >> limit;
    while (F3 < limit)
    {
        F3 = F1 + F2;
        if (F2 % 2 == 0)
        {
            fibevens.push_back(F2);
        }
        F1 = F2;
        F2 = F3;
        count += 1;
    }
}

int main()
{
    calcfib();
    int sum = accumulate(fibevens.begin(),fibevens.end(), 0);
    cout<<"The sum of all even numbers in the fibonacci sequence up to a value of " <<limit <<" is " <<sum <<endl;
    return 0;
}