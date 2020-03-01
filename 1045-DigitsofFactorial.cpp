#include<bits/stdc++.h>
using namespace std;

#define mx 1000010
double arr[mx];

void log_generator()
{
    long long int i;

    for(i = 1; i < mx; i++)
    {
        arr[i] = arr[i - 1] + log(i);
    }
}

int main()
{
    log_generator();

    int t, i;

    long long n, base, ans;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%lld %lld", &n, &base);

        ans =  ( arr[n] / log(base) ) + 1;

        printf("Case %d: %lld\n", i, ans);
    }
}
