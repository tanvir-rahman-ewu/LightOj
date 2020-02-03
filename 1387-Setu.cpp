#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int test, c = 1, N, amount,total;
    string operation;

    scanf("%d",&test);

    while(test--)
    {
        printf("Case %d:\n",c++);

        scanf("%d",&N);

        total = 0;

        while(N--)
        {
            cin >> operation;

            if(operation == "donate")
            {
                scanf("%d",&amount);

                total += amount;
            }
            else
            {
                printf("%d\n",total);
            }
        }
    }
}
