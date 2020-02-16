#include<bits/stdc++.h>
using namespace std;

#define size 26

int visited[size][size][size];
int times[size][size][size];

#define forbidden 1

int X[] = {1, -1, 0, 0, 0, 0};
int Y[] = {0, 0, 1, -1, 0, 0};
int Z[] = {0, 0, 0, 0, 1, -1};

struct point
{
    int x,y,z;

    point()
    {

    }

    point(int a, int b, int c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
};

int bfs(string start, string end)
{
    queue<point> q;
    int flag = 0;

    point p(start[0] - 'a', start[1] - 'a', start[2] - 'a');

    q.push(p);

    visited[start[0] - 'a'][start[1] - 'a'][start[2] - 'a'] = forbidden;

    times[start[0] - 'a'][start[1] - 'a'][start[2] - 'a'] = 0;

    while(!q.empty())
    {
        point temp = q.front();
        q.pop();

        if(temp.x == end[0] - 'a' && temp.y == end[1] - 'a' && temp.z == end[2] - 'a')
        {
            flag = 1;

            return times[temp.x][temp.y][temp.z];
        }

        for(int i = 0; i < 6; i++)
        {
            point temp1 = temp;

            temp1.x = (temp1.x + X[i]) % 26;
            temp1.y = (temp1.y + Y[i]) % 26;
            temp1.z = (temp1.z + Z[i]) % 26;

            if(temp1.x < 0) { temp1.x = 25; }
            if(temp1.y < 0) { temp1.y = 25; }
            if(temp1.z < 0) { temp1.z = 25; }


            if(!visited[temp1.x][temp1.y][temp1.z])
            {
                visited[temp1.x][temp1.y][temp1.z] = forbidden;

                times[temp1.x][temp1.y][temp1.z] = times[temp.x][temp.y][temp.z] + 1;

                q.push(temp1);
            }
        }
    }

    if(!flag)
    {
        return -1;
    }
}

int main()
{
    int test_case, n, l1, l2, l3, c = 1;

    string start, end, s1, s2, s3;

    scanf("%d",&test_case);
    cin.ignore();

    while(test_case--)
    {
        memset(visited, 0, sizeof visited);
        memset(times, 0, sizeof times);

        cin >> start >> end >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> s1 >> s2 >> s3;

            l1 = s1.length();
            l2 = s2.length();
            l3 = s3.length();

            for(int j = 0; j < l1; j++)
            {
                for(int k = 0; k < l2; k++)
                {
                   for(int l = 0; l < l3; l++)
                   {
                        visited[s1[j] - 'a'][s2[k] - 'a'][s3[l] - 'a'] = forbidden;
                   }
                }
            }
        }

        if(visited[start[0]-'a'][start[1]-'a'][start[2]-'a'] == forbidden)
		{
			printf("Case %d: %d\n", c++, -1);
			continue;
		}

        int ans = bfs(start, end);

        printf("Case %d: %d\n", c++, ans);


    }
}
