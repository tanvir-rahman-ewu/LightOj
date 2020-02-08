#include<bits/stdc++.h>
using namespace std;
struct S
{
    string url;
    int parent,child;
};

int main()
{
    int test_case,current,past,c=1;
    string command,u;

    scanf("%d",&test_case);

    while(test_case--)
    {
         int current = 0;

         vector<string> ans;
         vector<S> url;

         S s;

         s.url = "http://www.lightoj.com/";
         s.parent = -1;
         s.child = -1;


         url.push_back(s);
         ans.push_back("http://www.lightoj.com/");


        cin.ignore();

        while(cin>>command && command != "QUIT")
        {
            if(command == "VISIT")
            {
                cin>>u;

                s.url = u;
                s.parent = current;
                s.child = -1;


                url.push_back(s);
                ans.push_back(u);

                url[current].child = url.size() - 1;

                current++;

            }
            else if(command == "BACK")
            {
                if(current == 0)
                {
                    ans.push_back("Ignored");
                }
                else
                {
                    current = url[current].parent;
                    ans.push_back(url[current].url);
                }
            }
            else if(command == "FORWARD")
            {
                if(url[current].child == -1)
                {
                     ans.push_back("Ignored");
                }
                else
                {
                    current = url[current].child;
                    ans.push_back(url[current].url);
                }
            }
        }
        printf("Case %d:\n",c++);
        for(int i = 1;i < ans.size() ; i++)
        {
            cout<<ans[i]<<endl;
        }


    }
}
