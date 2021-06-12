#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int amount;
    cin>>amount;
    vector<int>coin(n);
    for(int i=0;i<n;i++)
        cin>>coin[i];

    int dp[amount+1];
    int inf=1e9;
    memset(dp,inf,sizeof dp);
    dp[0]=0;
    int ans=inf;

    for(int i=1;i<=amount;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i-coin[j]>=0)
            {
                ans=min(ans,dp[i-coin[j]]);
            }
        }
        if(ans==inf)
            dp[i]=inf;
        else
            dp[i]=ans+1;
        ans=inf;
    }
    cout<<dp[amount]<<endl;
}
