#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,m,n,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d",&m,&n);

        if( m==1 || n==1 )
        {
            printf("Case %d: %d\n",c++,m+n-1);
        }
        else if(m==2 || n==2)
        {
            if(m%2==1)
            {
                printf("Case %d: %d\n",c++,m+1);
            }
            else if(n%2==1)
            {
                printf("Case %d: %d\n",c++,n+1);
            }
            else if(m==2 && n==2)
            {
                printf("Case %d: %d\n",c++,4);
            }
            else if(m/2%2==1 && n/2%2==1)
            {
                printf("Case %d: %d\n",c++,m+n);
            }
            else
            {
                printf("Case %d: %d\n",c++,m*n/2);
            }
        }
        else if(m*n == 6)
        {

            printf("Case %d: %d\n",c++,4);
        }
        else if(m*n%2==0)
        {

            printf("Case %d: %d\n",c++,m*n/2);
        }
        else
        {
            printf("Case %d: %d\n",c++,m*n/2+1);
        }
    }
}
