#include <iostream>
using namespace std;

bool isPrime(int value);
//Determines whether a number is prime or not and returns true/false

int main()
{
    int num;
    cin >> num;

    for(int i = 2; i < num; i++)
    {
      if (isPrime(i))
        cout << i << " ";
    }
    return 0;
}

bool isPrime(int value)
{
    for(int i = 2; i < value; i++)
    {
        if (value % i == 0 && i != value)
            return false;
    }
    return true;
}
