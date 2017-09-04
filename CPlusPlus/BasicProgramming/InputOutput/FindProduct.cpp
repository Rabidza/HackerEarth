//Find Product
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    int modulo = pow(10,9) + 7;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    long long answer = 1;
    for (int i = 0; i < N; i++)
    {
        answer = (answer * A[i]) %modulo;
    }

    cout << answer;


    return 0;
}
