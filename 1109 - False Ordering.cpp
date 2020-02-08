#include<bits/stdc++.h>
using namespace std;



vector< pair<int, int> > v;

bool com(pair<int,int> a,pair<int,int> b)
 {
    if(a.first != b.first)
    {
         return a.first<b.first;
    }
    else
    {
        return (a.second > b.second );
    }
}

int divisor(int x)
{
    int ans = 0;

    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            ans++;
        }
    }

    return ans;
}

void generate_ans()
{
    for(int i=0;i<=1000;i++)
    {
        v.push_back(make_pair(divisor(i),i));
    }
    sort(v.begin(),v.end(),com);
}

int main()
{
    int test_case,c=1,n;

    generate_ans();

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%d",&n);

        printf("Case %d: %d\n", c++, v[n].second);
    }
}
