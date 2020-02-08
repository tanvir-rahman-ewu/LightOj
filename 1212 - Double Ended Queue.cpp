#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,n,m,value,c=1,l,r;
    string st;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int arr[20],s=0;

        l = 9;
        r = 10;

        scanf("%d %d",&n,&m);
        getchar();

        printf("Case %d:\n",c++);

        while(m--)
        {
            cin>>st;

            if(st == "pushLeft")
            {
                scanf("%d",&value);

                if(s!=n)
                {
                   arr[l] = value;

                   printf("Pushed in left: %d\n",value);

                   l--;
                   s++;
                }
                else
                {
                    printf("The queue is full\n");
                }

            }
            else if(st == "pushRight")
            {
                scanf("%d",&value);

                if(s!=n)
                {
                    arr[r] = value;

                    printf("Pushed in right: %d\n",value);

                    r++;
                    s++;
                }
                else
                {
                    printf("The queue is full\n");

                }

            }
            else if(st == "popLeft")
            {
                if(s == 0)
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    printf("Popped from left: %d\n",arr[l+1]);

                    l++;
                    s--;
                }
            }
            else
            {
                if(s == 0)
                {
                    printf("The queue is empty\n");
                }
                else
                {
                    printf("Popped from right: %d\n",arr[r-1]);

                    r--;
                    s--;
                }
            }

        }

    }

}
