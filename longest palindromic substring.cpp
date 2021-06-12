#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int main()
{
    int n;
    cin>>n;
    char s[n+2];
    for(int i=1;i<=n;i++)cin>>s[i];
    for(int i=0;i<=n;i++)
        dp[0][i]=dp[1][i]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(s[j]==s[j-i+1] and dp[i-2][j-1]==1)
                dp[i][j]=1;
            else
                dp[i][j]=0;
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
}
