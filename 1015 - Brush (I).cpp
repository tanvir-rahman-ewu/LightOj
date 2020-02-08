#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,N,sum,val,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {

        sum = 0;

        scanf("%d",&N);


        while(N--)
        {
            scanf("%d",&val);

            if(val>0)
            {
                 sum += val;
            }
        }

        printf("Case %d: %d\n",c++,sum);
    }
}
