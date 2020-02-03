#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case, c = 1;

    string number;

    cin>>test_case;

    while(test_case--)
    {
        cin >> number;

        string temp = number;

        reverse(temp.begin(),temp.end());

        if(temp == number)
        {
            printf("Case %d: Yes\n",c++);
        }
        else
        {
            printf("Case %d: No\n",c++);
        }

    }
}
