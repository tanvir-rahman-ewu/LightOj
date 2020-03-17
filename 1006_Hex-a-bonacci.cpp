#include<bits/stdc++.h>
using namespace std;

long long arr[10005];

long long fn(int n)
{
    for(int i = 6; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4] + arr[i - 5] + arr[i - 6]) % 10000007;
    }

    return arr[n] % 10000007;
}

int main()
{
    int t, i, j, n;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        for(j = 0; j < 6; j++)
        {
            scanf("%lld", &arr[j]);
        }

        scanf("%d", &n);

        printf("Case %d: %lld\n", i, fn(n));
    }
}
