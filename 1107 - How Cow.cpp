#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,x1,y1,x2,y2,n,c=1,a,b;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        scanf("%d",&n);

        printf("Case %d:\n",c++);

        while(n--)
        {
            scanf("%d %d",&a,&b);

            if(a>=x1 && a<=x2 && b>=y1 && b<=y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}
