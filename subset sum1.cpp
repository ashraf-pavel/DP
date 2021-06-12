#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,amount;
    cin>>n>>amount;
    vector<int>value(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
    }
    int dp[n+1][amount+1];
    dp[0][0]=1;
    for(int i=1;i<=amount;i++)
        dp[0][i]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=amount;j++)
        {
            if(j-value[i]<0)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                int need=j-value[i];
                if(dp[i-1][j]==1 or dp[i-1][need]==1)
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }
    }
    if(dp[n][amount]==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
