//Play with numbers
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    long long N, Q, L, R, valueSum = 0;
    cin >> N;
    cin >> Q;

    long long values[N], sum[N] = {0};

    for (long long i = 1; i <= N; i++)
    {
        scanf("%lld",&values[i]);
        valueSum += values[i];
        sum[i] = valueSum;
    }

    for (long long i = 1; i <= Q; i++)
    {
        scanf("%lld%lld",&L,&R);
        printf("%lld\n",(sum[R]-sum[L-1])/(R-L+1));
    }

    return 0;
}
