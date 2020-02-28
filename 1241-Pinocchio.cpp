#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, i, j, n, cnt, prev;

    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &a);

        cnt = 0;

        for(j = 0; j < a; j++)
        {
            scanf("%d", &n);

            if(j != 0)
            {
                if(prev != n)
                {
                    cnt += ceil((n - prev) / 5.0);
                }
            }
            else
            {
                cnt += ceil((n - 2) / 5.0);
            }
            prev = n;
        }

        printf("Case %d: %d\n",i, cnt);
    }
}
