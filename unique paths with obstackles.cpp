#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>ar[i][j];
    }

    long long dp[n+1][m+1];
    memset(dp,0,sizeof dp);
    dp[n][m]=ar[n-1][m-1]^1;
    //last row
    for(int i=m-1;i>=1;i--)
    {
        if(ar[n-1][i-1]==1 or dp[n][i+1]==0)
            dp[n][i]=0;
        else
            dp[n][i]=1;
    }
    //last col
    for(int i=n-1;i>=1;i--)
    {
        if(ar[i-1][m-1]==1 or dp[i+1][m]==0)
            dp[i][m]=0;
        else
            dp[i][m]=1;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=m-1;j>=1;j--)
        {
            if(ar[i-1][j-1]==1)
                dp[i][j]=0;
            else
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
    }
    cout<<dp[1][1]<<endl;

}
