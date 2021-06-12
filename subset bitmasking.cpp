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

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    int z=0;
    string s="ABCDE";
    while(tc--)
    {
        int n;
        cin>>n;
        ll tot=1<<n;
        for(int mask=0;mask<tot;mask++)
        {
            for(int i=0;i<n;i++)
            {
                int val=1<<i;
                if((mask & val)!=0)
                    cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

