#include<bits/stdc++.h>
using namespace std;

string s[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};


int main()
{
    string s_month, e_month, ch;

    map<string,int> m;

    for(int i = 0; i < 12 ;i ++)
    {
        m[s[i]] = i+1;
    }

    long long int s_day, s_year, e_day, e_year, test, total, c = 1;

    scanf("%d",&test);

    while(test--)
    {
        cin >> s_month >> s_day >> ch >> s_year;

        cin >> e_month >> e_day >> ch >> e_year;

        s_year--;

        if(m[s_month] > 2)
        {
            s_year++;
        }
        if(m[e_month] < 2 || (m[e_month] == 2 && e_day < 29))
        {
            e_year--;
        }

        //cout<<s_year<<endl<<e_year<<endl;

        cout<<e_year/4-e_year/100+e_year/400<<endl<<s_year/4-s_year/100+s_year/400<<endl;

        long long int leapyear=(e_year/4-e_year/100+e_year/400)-(s_year/4-s_year/100+s_year/400);

        printf("Case %lld: %lld\n", c++, leapyear);
    }
}
