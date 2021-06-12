#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
#define N 200005
int n,w;
int wt[N],val[N];

int knapsack(int n,int w)
{
    if(n==0 or w==0)
        return 0;
    if(wt[n-1]<=w)
    {
        return max(val[n-1]+knapsack(n-1,w-wt[n-1]),knapsack(n-1,w));
    }
    else
        return knapsack(n-1,w);
}

int main()
{
    cin>>n>>w;
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>val[i];
    int max_profit=knapsack(n,w);
    cout<<max_profit<<endl;
}
