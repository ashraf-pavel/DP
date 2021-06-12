#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int main()
{
    int n,amount;
    cin>>n>>amount;
    vector<int>value(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>value[i];
    }
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=amount;j>=value[i];j--)
        {
            if(dp[j] or dp[j-value[i]]==0)
                continue;
            else
                dp[j]=value[i];
        }
    }
    if(dp[amount]==0)
        cout<<"Unable to find target value\n";
    else
    {
        while(amount)
        {
            cout<<dp[amount]<<" ";
            amount-=dp[amount];
        }
        cout<<endl;
    }
}

