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

void solve()
{
    int n,m;
    string s,t;
    cin>>s>>t;
    n=s.size();
    m=t.size();
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
                dp[i][j]=j;//min operation j
            else if(j==0)
                dp[i][j]=i;//max operation i
            else if(s[i-1]==t[j-1])
                dp[i][j]=dp[i-1][j-1];//then last possible ans
            else
            {
                dp[i][j]=1+min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});//i-1,j--remove....i,j-1---insert...i-1,j-1---replace
            }
        }
    }
    cout<<dp[n][m]<<endl;

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

