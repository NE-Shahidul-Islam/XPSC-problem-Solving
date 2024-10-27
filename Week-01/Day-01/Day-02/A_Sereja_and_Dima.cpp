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
#define pll pair<ll, ll>
#define vpll vector<pll>
#define uni(x) x.erase(unique(all(x)), x.end())

const int N=1e6+9;
int a[N],b[N];
using namespace std;
void naruto()
{
   int n;
  in(n);
vi v(n);
for(int i =0; i< n; i++) cin >> v[i];

ll sereja = 0, dima = 0;
int turn = 0;
while ((int) v.size())
{
    if(turn == 0){
        if(v.front() > v.back()){
            sereja += v.front();
            v.erase(v.begin());
             turn = 1;
        }
        else{
            sereja += v.back();
            v.pop_back();
             turn = 1;
        }

       
    }

    else{
        if(v.front() > v.back()){
            dima += v.front();
            v.erase(v.begin());
             turn = 0;
        }
        else{
            dima += v.back();
            v.pop_back();
             turn = 0;
        }

       
    }
}

cout << sereja <<' '<<dima << nl;
  
   
}


signed main()
{
    FIO;
   naruto();
    return 0;
}