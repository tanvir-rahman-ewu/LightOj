#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,a,b,c,cs=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a*a + b*b == c*c)
        {
            printf("Case %d: yes\n",cs++);
        }
        else if(a*a + c*c == b*b)
        {
             printf("Case %d: yes\n",cs++);
        }
        else if(c*c + b*b == a*a)
        {
             printf("Case %d: yes\n",cs++);
        }
        else
        {
             printf("Case %d: no\n",cs++);
        }
    }
}
