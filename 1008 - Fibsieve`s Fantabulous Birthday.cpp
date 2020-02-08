#include<bits/stdc++.h>

using namespace std;

bool is_square(long long num)
{
    long long sqr = sqrt(num);

    if(sqr*sqr == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int test_case;

    long long int time,x,y,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%lld",&time);

        long long before = sqrt(time);
        long long after = before + 1;

        if( is_square(time))
        {
            if( time % 2 == 0 )
            {
                printf("Case %lld: %lld %d\n",c++,before,1);
            }
            else
            {
                printf("Case %lld: %d %lld\n",c++,1,before);
            }
        }
        else
        {
            long long bef_sqr = before*before;
            long long aft_sqr = after*after;

            if(before % 2 == 0)
            {
                if(time - bef_sqr <= after)
                {
                    x = before + 1;
                    y = time - bef_sqr ;
                }
                else
                {
                    x = aft_sqr - time + 1;
                    y = after;
                }
            }
            else
            {
                if(time - bef_sqr <= after)
                {
                    x = time - bef_sqr ;
                    y = before + 1;
                }
                else
                {
                    x = after;
                    y = aft_sqr - time + 1;
                }
            }

            printf("Case %lld: %lld %lld\n",c++,x,y);
        }
    }

}
