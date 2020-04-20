// Euler Project - Problem 1 //
// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. //
// Find the sum of all the multiples of 3 or 5 below 1000. //
// Brent Hartley //

#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
    {
        vector<int> nums;
        int limit = 1000;
        for (int i = 1; i < limit; i++)
        {
            if (i % 3 == 0 || i % 5 == 0)
            {
                nums.push_back(i);
            }
        }
        cout <<"The sum of all multiples of 3 or 5 below the number 1000 is :";
        cout <<accumulate(nums.begin(),nums.end(), 0) <<endl;
        
        return 0;
    }