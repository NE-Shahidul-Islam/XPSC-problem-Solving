#include <bits/stdc++.h>
#define FIO                      \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define ll long long
#define in(x) cin>>x
#define out(x) cout<<x
#define vin(v) for(int i=1; i<=n; i++) in(v[i])
#define vout(v) for(int i=1; i<=n; i++) out(v[i])
#define llloop(i, a, b)  for (ll i = a; i <= b; i++)
#define rllloop(i, b, a)  for (ll i = b - 1; i >= a; i--)
#define iloop(i, a, b)  for (int i = a; i <= b; i++)
#define riloop(i, b, a)  for (int i = b - 1; i >= a; i--)
#define sob(x)  x.begin(), x.end()
#define rsob(x)  x.rbegin(), x.rend()
#define sz(x)  (ll) x.size()
#define pb  push_back
#define ppb  pop_back
#define M 1e9 + 7
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nl '\n'
#define bits(x) __builtin_popcountll(x)
#define vl vector<ll>
#define vi vector<int>
#define pii pair<int, int>
#define vpll vector<pll>
#define uni(x) x.erase(unique(all(x)), x.end())

const int N=1e6+9;
int a[N],b[N];
using namespace std;
void naruto()
{
  int n;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++)
        cin>>p[i];
    string s;
    cin>>s;
    vector<pii>up,down;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
            up.push_back({p[i],i});
        else
            down.push_back({p[i],i});
    }
    sort(up.begin(),up.end());
    sort(down.begin(),down.end());
    int now=0;
    int q[n];
    for(auto u:down)
    {
        q[u.second]=++now;
    }
    for(auto u:up)
    {
        q[u.second]=++now;
    }
    for(int i=0;i<n;i++)
        cout<<q[i]<<' ';
    cout<<'\n';


  
   
}


signed main()
{
    FIO;
   int t; cin>>t;
for(int i=0 ;i<t; i++) naruto();
    return 0;
}