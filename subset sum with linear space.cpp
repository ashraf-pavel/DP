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
    int dp[amount+1]={};
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=amount;j>=value[i];j--)
        {
            if(dp[j] or dp[j-value[i]]==0)
                continue;
            else
                dp[j]=1;
        }
    }
    for(int i=0;i<=amount;i++)
        cout<<dp[i]<<" ";
    cout<<endl;
}
