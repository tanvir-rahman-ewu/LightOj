#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,c=1;

    string a, b;

    scanf("%d",&test);
    cin.ignore();

    while(test--)
    {
        getline(cin,a);

        getline(cin,b);

        string tempa="",tempb="";

        for(int i = 0; i<a.size(); i++)
        {
            a[i] = tolower(a[i]);

            if(a[i]!= ' ')
            {
                tempa = tempa + a[i];
            }
        }

        for(int i = 0; i<b.size(); i++)
        {
            b[i] = tolower(b[i]);

            if(b[i]!= ' ')
            {
                tempb = tempb + b[i];
            }
        }

        sort(tempa.begin(),tempa.end());
        sort(tempb.begin(),tempb.end());

        if( tempa == tempb )
        {
            printf("Case %d: Yes\n",c++);
        }
        else
        {
            printf("Case %d: No\n",c++);
        }
    }
}
