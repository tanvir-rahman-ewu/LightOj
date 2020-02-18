#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, P, Q, j, cnt, sum;

    int weight[35];

    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d %d %d",&n, &P, &Q);

        for(j = 0; j < n; j++)
        {
            scanf("%d", &weight[j]);
        }

        cnt = 0;

        sum = 0;

        sort(weight, weight + n);

        for(j = 0; j < n; j++)
        {
            sum += weight[j];

            if(sum > Q || j == P)
            {
                break;
            }
            cnt++;
        }

        printf ("Case %d: %d\n" , i , cnt);

    }
}
