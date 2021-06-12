#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define N 10000001
#define F first
#define S second
#define MAX 500050
#define ALL(v) v.begin(),v.end()
#define clr(x,y) memset(x,y,sizeof x)
#define valid(x,y) ((x>=0&&x<n) && (y>=0&&y<m))
#define dbg(x) cerr << #x << " is " << x << endl;
#define done(i) cout<<"done = "<<i<<endl;


using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll fact(ll n)
{
    ll res=1;
    for(int i=2;i<=n;++i)
    {
        res*=i;
        res%=MOD;
    }
    return res;
}
int h[1001],s[1001];
//int dp[1001][100001];

int knapsack(int n,int x)
{
    if(n==0 or x==0)
    {
        return 0;
    }
    /*if(dp[n][x]!=-1)
        return dp[n][x];
    */if(h[n-1]<=x)
    {
        return max(s[n-1]+knapsack(n-1,x-h[n-1]),knapsack(n-1,x));
    }
    else
        return knapsack(n-1,x);
}

void solve()
{
    //memset(dp,-1,sizeof dp);
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)cin>>h[i];
    for(int i=0;i<n;i++)cin>>s[i];
    vector<vector<int> >dp(n+1, vector<int>(x+1,0));

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-h[i-1]>=0)
            {
                dp[i][j]=max(dp[i][j], dp[i-1][j-h[i-1]]+s[i-1]);
            }
        }
    }
    cout<<dp[n][x]<<endl;

}

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    int z=0;
    while(tc--)
    {
        solve();
    }
    return 0;
}

