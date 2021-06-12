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
#define inf 0x3f3f3f3f
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
//greedy solution
void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    string s;
    while(1)
    {
        s=to_string(n);
        sort(ALL(s));
        int sz=s.size();
        int big=s[sz-1]-'0';
        n-=big;
        cnt++;
        if(n==0)
            break;
    }
    cout<<cnt<<endl;

}

//dp solution
void solve1()
{
    int n;
    cin>>n;
    int dp[n+1];
    clr(dp,inf);
    dp[0]=0;
    for(int i=0;i<=n;i++)
    {
        string s=to_string(i);
        for(auto c:s)
        {
            int val=c-'0';
            dp[i]=min(dp[i],dp[i-val]+1);
        }
        //dbg(dp[i]);
    }
    cout<<dp[n]<<endl;
}

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    int z=0;
    while(tc--)
    {
        //solve();
        solve1();
    }
    return 0;
}

