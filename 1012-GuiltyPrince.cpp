#include<bits/stdc++.h>
using namespace std;

int xx[] = {1, -1, 0, 0};
int yy[] = {0, 0, 1, -1};

string s[22];

struct point
{
    int x, y;
};
point p;

int bfs(int w, int h)
{
    int cnt = 1;

    queue<point> q;

    q.push(p);

    while(!q.empty())
    {
        point temp = q.front();
        point temp1 = temp;

        q.pop();

        for(int i = 0; i < 4; i++)
        {
            temp1.x = temp.x + xx[i];
            temp1.y = temp.y + yy[i];

            if( temp1.x >= 0 && temp1.y >= 0 && temp1.x < h && temp1.y < w && s[temp1.x][temp1.y] == '.')
            {
                s[temp1.x][temp1.y] = 'x';

                q.push(temp1);

                cnt++;
            }

        }
    }

    return cnt;
}
int main()
{
    int test,w,h,c = 1;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&w,&h);
        cin.ignore();


        for(int i = 0; i < h; i++)
        {
            cin >> s[i];
        }

        for(int i = 0; i < h ; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(s[i][j] == '@')
                {
                    p.x = i;
                    p.y = j;

                    printf("Case %d: %d\n",c++,bfs(w, h));

                    break;
                }
            }
        }
    }
}
