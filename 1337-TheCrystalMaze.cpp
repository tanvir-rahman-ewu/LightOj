#include<bits/stdc++.h>
using namespace std;


int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
int M,N, cnt = 0;

int visited[505][505];
int crystal[505][505];

string maze[505];

void dfs(int x, int y)
{

    if(x < 0 || y < 0 || x >= M || y >= N || maze[x][y] == '#' || visited[x][y])
    {
        return;
    }

    visited[x][y] = 1;

    if(maze[x][y] == 'C')
    {
        cnt++;
    }

    for(int i = 0; i < 4; i++)
    {
        int a, b;

        a = x + X[i];
        b = y + Y[i];

        dfs(a, b);
    }
}

int main()
{
    int i,t, j, Q, x, y;

    scanf("%d",&t);

    cin.ignore();

    for(i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &M, &N, &Q);

        memset(crystal, -1, sizeof crystal);

        cin.ignore();

        for(j = 0; j < M; j++)
        {
            cin >> maze[j];
        }

        printf("Case %d:\n", i);

        for(j = 0; j < Q; j++)
        {
            scanf("%d %d",&x, &y);

            x--;
            y--;

            if(crystal[x][y] != -1)
            {
                printf("%d\n", crystal[x][y]);
            }
            else
            {
                memset(visited, 0 , sizeof visited);

                dfs(x, y);

                for(int k = 0; k < M; k++)
                {
                    for(int l = 0; l < N; l++)
                    {
                        if(visited[k][l])
                        {
                            crystal[k][l] = cnt;
                        }
                    }
                }

                printf("%d\n", cnt);

                cnt = 0;
            }

        }
    }
}
