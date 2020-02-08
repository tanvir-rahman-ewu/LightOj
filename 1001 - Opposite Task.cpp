#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,number;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&number);

        if(number == 0)
        {
            printf("%d %d\n",0,0);
        }
        else if(number > 10)
        {
            printf("%d %d\n",number - 10, number - (number - 10));
        }
        else
        {
            printf("%d %d\n",0,number);
        }
    }
}
