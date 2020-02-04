#include<bits/stdc++.h>
using namespace std;

int mx = 0;
int visited[20005];
vector<int> v[20005];
int color[20005];

void init()
{
    for(int i = 1; i < 20005; i++)
    {
        visited[i] = 0;
        color[i] = -1;
        v[i].clear();
        mx = 0;
    }
}

void bfs(int source)
{
    int a=0,b=0;

    queue<int> q;

    q.push(source);

    color[source] = 0;
    a++;

    visited[source] = 1;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();

        for(int i = 0; i < v[temp].size(); i++)
        {
            if(visited[v[temp][i]] == 0 )
            {
                visited[v[temp][i]] = 1;

                q.push(v[temp][i]);

                if(color[temp] == 1)
                {
                    color[v[temp][i]] = 0;
                    a++;
                }
                else
                {
                    color[v[temp][i]] = 1;
                    b++;
                }
            }
        }
    }

    mx = mx + max(a,b);
}

int main()
{
    int test,edge,a,b,c=1;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&edge);

        init();

        for(int i = 0; i < edge ; i++)
        {
            scanf("%d %d",&a,&b);

            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(int i = 1; i < 20005; i++)
        {
            if(!v[i].empty() and visited[i] == 0)
            {
                bfs(i);
            }
        }
        printf("Case %d: %d\n",c++,mx);

    }
}
