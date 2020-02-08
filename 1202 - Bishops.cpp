#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,test_case,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        if(abs(x1-y1)%2 != abs(x2-y2)%2)
        {
            printf("Case %d: impossible\n",c++);
        }
        else
        {
            if(abs(x1-x2) == abs(y1-y2))
            {
                printf("Case %d: 1\n",c++);
            }
            else
            {
                printf("Case %d: 2\n",c++);
            }

        }
    }
}
