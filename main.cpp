#include <iostream>
using namespace std;

long long prime(long long num)
{
    if (num % 2 == 0)
        return 0;
    for (long long i = 3; i <= ((num / 2) + 1); i += 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

long long bigprime(long long n)
{
    long long largestFactor = 0;
    for(long long i = 3; i <= n; i += 2)
    {
        if (n % i == 0)
        {
            if (prime(i))
            {
                largestFactor = i;
                cout << largestFactor << endl;
            }
        }
    }
    return largestFactor;
}

int main()
{
    long long input = 600851475143;
    cout << bigprime(input);
    return 0;
}