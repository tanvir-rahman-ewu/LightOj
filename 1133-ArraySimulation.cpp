#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, k, m, n, Y, Z , d;

    int a[105];

    char S, M, D, R, P;

    string c;

    scanf("%d",&t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &m);

        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        for(j = 0; j < m; j++)
        {
            cin >> c;

            if(c == "S")
            {
                scanf("%d", &d);

                for(k = 0; k < n; k++)
                {
                    a[k] += d;
                }
            }
            else if(c == "M")
            {
                scanf("%d", &d);

                for(k = 0; k < n; k++)
                {
                    a[k] *= d;
                }
            }
            else if(c == "D")
            {
                scanf("%d", &d);

                for(k = 0; k < n; k++)
                {
                    a[k] /= d;
                }
            }
            else if(c == "R")
            {
                reverse(a, a + n);
            }
            else
            {
                scanf("%d %d", &Y, &Z);

                swap(a[Y], a[Z]);
            }
        }

        printf("Case %d:\n",i);

        for(j = 0; j < n; j++)
        {
            if(j == n - 1)
            {
                printf("%d",a[j]);
                continue;
            }
            printf("%d ",a[j]);
        }
        printf("\n");
    }
}
