#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test_case,c=1,M,N;
    long long int value;

    scanf("%lld",&test_case);

    while(test_case--)
    {
        scanf("%lld",&value);

        bool yes =false;
        long long sqr = value/2 ;


        for(long long int i = 2 ; i<=sqr; i++)
        {
            if( value%i == 0 && value/i%2!=0)
            {

                M = i;
                N = value / i;
                yes =true;
                break;
            }


        }
        if(yes)
        {
            printf("Case %lld: %lld %lld\n",c++,N,M);
        }
        else
        {
            printf("Case %lld: Impossible\n",c++);
        }

    }



}
