#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test_case,current,past,c=1;
    string command,u;

    scanf("%d",&test_case);

    while(test_case--)
    {
        int current = 0;

        vector<string> ans;

        stack<string> forward;
        stack<string> backward;

        forward.push("http://www.lightoj.com/");
        backward.push("http://www.lightoj.com/");

        cin.ignore();

        while(cin>>command && command != "QUIT")
        {
            if(command == "VISIT")
            {
                cin>>u;

                backward.push(u);

                while(forward.size()>1)
                {
                    forward.pop();
                }
                ans.push_back(u);
            }
            else if(command == "BACK")
            {
                if(backward.size() == 1)
                {
                    ans.push_back("Ignored");
                }
                else
                {
                    string temp = backward.top();

                    forward.push(temp);

                    backward.pop();

                    ans.push_back(backward.top());
                }
            }
            else if(command == "FORWARD")
            {
                if(forward.size() == 1)
                {
                    ans.push_back("Ignored");
                }
                else
                {
                    string temp = forward.top();

                    forward.pop();

                    backward.push(temp);

                    ans.push_back(backward.top());
                }
            }
        }
        printf("Case %d:\n",c++);
        for(int i = 0;i < ans.size() ; i++)
        {
            cout<<ans[i]<<endl;
        }


    }
}

