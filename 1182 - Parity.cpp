#include<bits/stdc++.h>
using namespace std;

int count_one(int value)
{
    int c=0;

    while(value)
    {
        if(value%2)
        {
            c++;
        }
        value/=2;
    }
    return c;
}
int main()
{
    int test_case,value,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&value);

        if(count_one(value)%2==1)
        {
            printf("Case %d: odd\n",c++);
        }
        else
        {
            printf("Case %d: even\n",c++);
        }

    }
}
