#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    int n;
    cin>>n;
    int amount;
    cin>>amount;
    vector<int>coin(n);
    for(int i=0;i<n;i++)
        cin>>coin[i];

    int dp[101][amount+1];
    memset(dp,0,sizeof dp);
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=amount;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-coin[i-1]>=0)
            {
                dp[i][j]=(dp[i][j]+dp[i][j-coin[i-1]])%MOD;
            }
        }
    }


    cout<<dp[n][amount]<<endl;
}

