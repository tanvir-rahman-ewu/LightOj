#include<bits/stdc++.h>
using namespace std;

int count_one(int val)
{
    int sum = 0;

    while(val)
    {
        sum += val%2;

        val /= 2;
    }

    return sum;
}
int main()
{
    int test_case,val,total,temp,c=1;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&val);

        temp = val+1;

        total = count_one(val);

        while(1)
        {
            if(count_one(temp) == total)
            {
                break;
            }
            temp++;
        }

        printf("Case %d: %d\n",c++,temp);

    }
}
