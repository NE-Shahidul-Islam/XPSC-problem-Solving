// #include <bits/stdc++.h>
// #define FIO                      \
//     ios::sync_with_stdio(false); \
//     cin.tie(nullptr)
// #define ll long long
// #define in(x) cin>>x
// #define out(x) cout<<x
// #define vin(v) for(int i=1; i<=n; i++) in(v[i])
// #define vout(v) for(int i=1; i<=n; i++) out(v[i])
// #define llloop(i, a, b)  for (ll i = a; i <= b; i++)
// #define rllloop(i, b, a)  for (ll i = b - 1; i >= a; i--)
// #define iloop(i, a, b)  for (int i = a; i <= b; i++)
// #define riloop(i, b, a)  for (int i = b - 1; i >= a; i--)
// #define sob(x)  x.begin(), x.end()
// #define rsob(x)  x.rbegin(), x.rend()
// #define sz(x)  (ll) x.size()
// #define pb  push_back
// #define ppb  pop_back
// #define M 1e9 + 7
// #define no cout<<"NO"<<endl
// #define yes cout<<"YES"<<endl
// #define nl '\n'
// #define bits(x) __builtin_popcountll(x)
// #define vl vector<ll>
// #define vi vector<int>
// #define pll pair<ll, ll>
// #define vpll vector<pll>
// #define uni(x) x.erase(unique(all(x)), x.end())

// const int N=1e6+9;
// int a[N],b[N];
// using namespace std;
// void naruto()
// {
//    int n;
//    cin >> n;
//    vector < int > v(n), diff;
//    for (int i = 0; i< n; i++){
//     cin >> v[i];
//    }

//    int ans = INT32_MAX;
//    for (int i = 1; i< n-1; i++){
//         int x = abs(v[i]-v[i-1]);
//         int y = abs(v[i]-v[i+1]);
//         diff.pb(max(x,y));
//    }

//    diff.push_back(abs(v[1]-v[0]));
//    diff.push_back(abs(v[n-1]-v[n-2]));

//    ans = *min_element(sob(diff));


//   cout << ans << nl;
   
// }


// signed main()
// {
//     FIO;
//    int t; cin>>t;
// for(int i=0 ;i<t; i++) naruto();
//     return 0;
// }

#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

using u64 = uint64_t;
#define u128 = __uint128_t

#define int                long long

#define yes                cout<<"YES\n"
#define no                 cout<<"NO\n"
#define nl                 cout<<"\n"
#define endl               "\n"

#define lin(n)             int n;cin>>n;
#define vin                vector<int>
#define pr                 pair<int, int>
#define pb(n)              push_back(n)
#define pp                 pop_back()
#define ppfr(v)            v.erase(v.begin());
#define all(x)             x.begin(),x.end()

#define fi                 first
#define se                 second

#define forn(i,e)          for(int i=0;i<e;i++)
#define Forn(i,e)          for(int i=1;i<=e;i++)
#define rforn(i,s)         for(int i=s-1;i>=0;i--)
#define print(arr)         for(auto x: arr)cout<<x<<" ";nl;
#define mprint(mp)         for(auto a : mp)cout<<a.first<<" "<<a.second<<endl;

#define fast_in_out        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
template <typename T>      using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const long long INF = 1e18;
const int M = 1e9 + 7;
const int N = 2e5 + 100;

void sukuna(int test){
    lin(n);
    vin v(n);
    set<int> s;
    for(int i = 1; i <= n; i++)s.insert(i);
    forn(i,n){
        cin >> v[i];
        if(s.count(v[i]))s.erase(v[i]);
    }
    map<int, int> mp;

    vin ans(n);
    for(int i = 0; i < n; i++){
        if(mp[v[i]]){
            ans[i] = *s.begin();
            s.erase(s.begin());
            continue;
        }else{
            ans[i] = v[i];
            mp[v[i]]++;
        }
    }

    print(ans);
    
}

int32_t main(){
    fast_in_out;

    int test;   cin>>test;
    for(int i = 1; i <= test; i++)sukuna(i);
    return 0;
}