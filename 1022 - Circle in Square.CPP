#include<bits/stdc++.h>
using namespace std;

#define pi 2 * acos (0.0)

int main()
{
   int test_case,c=1;

   double r,circle,square;

   scanf("%d",&test_case);

   while(test_case--)
   {
       scanf("%lf",&r);

       circle = pi * r * r;

       square = 4*r*r;

       printf("Case %d: %0.2lf\n",c++,square - circle);
   }
}
