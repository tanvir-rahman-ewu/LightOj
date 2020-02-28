#include<bits/stdc++.h>
using namespace std;

unsigned long long int fact[21];

void factorial()
{
    fact[0] = 1;

    for(int i = 1; i <= 20; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
}

int main()
{
    factorial();

    int t, i, j;

    unsigned long long int n;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%lld", &n);

        stack<int> s;

        for(j = 20; j >= 0; j--)
        {
            if(fact[j] <= n)
            {
                s.push(j);

                n -= fact[j];
            }
        }

        if(n)
        {
            printf("Case %d: impossible\n", i);
        }
        else
        {
            printf("Case %d: ", i);

            while(s.size() != 1)
            {
                printf("%d!+",s.top());
                s.pop();
            }

            printf("%d!\n",s.top());
            s.pop();
        }
    }
}
