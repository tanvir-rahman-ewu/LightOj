#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;

    double v1, v2, v3, a1, a2;

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);

        printf("Case %d: %lf %lf\n",i ,(v1 * v1) / (2.0 * a1) + (v2 * v2) / (2.0 * a2), max((v1 / a1) , (v2 / a2)) * v3 );
    }
}
