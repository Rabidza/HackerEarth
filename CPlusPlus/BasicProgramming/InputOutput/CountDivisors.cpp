//Count Divisors
#include <iostream>
using namespace std;

int main()
{
    int l, r, k;
    cin >> l >> r >> k;

    int counter = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % k == 0)
            counter += 1;
    }
    cout << counter;

    return 0;
}
