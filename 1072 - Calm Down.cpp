#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)


/*
    sin(PI/n) = r/(R-r)
    Now just by solving the equation (1) we get,
    r = sin(PI/n)*(R-r)
    r =( R*sin(PI/n)) – (r*sin(PI/n)
    1 =(( R*sin(PI/n))/r) – sin(PI/n) [ dividing both sides by r ]
    1 + sin(PI/n) = ( R*sin(PI/n))/r
    r = ( R*sin(PI/n)) / (1 + sin(PI/n))
*/
int main()
{
    int test_case,n,c=1;

    double R,A,r;

    scanf("%d",&test_case);

    while(test_case--)
    {
        scanf("%lf %d",&R,&n);

        A = sin(pi/n);


        r = A*R/(1+A);

        printf("Case %d: %.6f\n",c++,r);

    }
}
