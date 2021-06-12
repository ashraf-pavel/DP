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

ll ar[MAX];

ll dp[MAX];
ll ans(int n)
{
    if(n<=2)
        return n;
    if(n==3)
        return 4;
    if(dp[n]!=-1)
        return dp[n];
    dp[n]=(ans(n-1)+ans(n-2)+ans(n-3))%MOD;
    return dp[n];
}

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    int z=0;
    while(tc--)
    {
        ll n,m,k;
        string s,t;
        cin>>n;
        clr(dp,-1);
        cout<<ans(n)<<endl;
    }
    return 0;
}

