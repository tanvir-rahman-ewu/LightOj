#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,p,l,ans,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d %d",&p,&l);

        if(p<=l)
        {
             ans = l*4 + 9 + 10;
        }
        else
        {
            ans = p*4 + (p-l)*4 + 9 + 10;
        }


        printf("Case %d: %d\n",c++,ans);
    }
}
