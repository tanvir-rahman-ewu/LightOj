#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
long long arr[10005];
int fn( int n )
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );

}
void fiv()
{
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    arr[5] = f;

    for(int i=6;i<=10000;i++)
    {
        arr[i] = (arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6])%10000007  ;
    }
}

int main()
{
    int caseno = 0, cases;

    int n;

    scanf("%d", &cases);

    while( cases-- )
    {


        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);

        fiv();

        printf("Case %d: %d\n", ++caseno, arr[n] % 10000007);
    }
    return 0;
}
