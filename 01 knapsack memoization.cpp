#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define N 200005
int n,w;
int wt[N],val[N];
int dp[102][1002];

int knapsack(int n,int w)
{
    if(n==0 or w==0)
        return 0;
    if(dp[n][w]!=-1)
        return dp[n][w];
    if(wt[n-1]<=w)
    {
        return dp[n][w]=max(val[n-1]+knapsack(n-1,w-wt[n-1]),knapsack(n-1,w));
    }
    else
        return dp[n][w]=knapsack(n-1,w);
}

int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>w;
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>val[i];
    int max_profit=knapsack(n,w);
    cout<<max_profit<<endl;
}

