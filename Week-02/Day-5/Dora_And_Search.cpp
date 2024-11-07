#include<bits/stdc++.h>
using namespace std;

typedef                    long long ll;
typedef                    long double ld;
#define int                long long

#define yes                cout<<"YES\n"
#define no                 cout<<"NO\n"
#define nl                 cout<<"\n"
#define endl               "\n"

#define lin(n)             ll n;cin>>n;
#define in(n)              int n;cin>>n;
#define vin                vector<int>
#define pr                 pair<int, int>
#define pb(n)              push_back(n)
#define pp                 pop_back()
#define srt(v)             sort(v.begin(),v.end());
#define all(x)             x.begin(),x.end()

#define fi                 first
#define se                 second
#define mmp                make_pair

#define sz(x)              ((int)(x).size())
#define forn(i,e)          for(int i=0;i<e;i++)
#define Forn(i,e)          for(int i=1;i<=e;i++)
#define rforn(i,s)         for(int i=s-1;i>=0;i--)
#define print(arr)         for(auto x: arr)cout<<x<<" ";nl;

#define fast_in_out        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const long long INF = 1e19;
const int M = 1e9 + 7;

void sukuna(){
    lin(n);
    vin v(n);
    forn(i,n)cin >> v[i];

    if(n <= 3){
        cout<<-1<<endl;
        return;
    }
    
    int l = 0, r = n - 1;
    int mn = 1, mx = n;

    for(;l < r;){
        bool ck1 = 0, ck2 = 0;
        if(v[l] == mn){l++; mn++; ck1 = 1;}
        else if(v[l] == mx){l++; mx--; ck1 = 1;}

        if(v[r] == mn){r--; mn++; ck2 = 1;}
        else if(v[r] == mx){r--; mx--; ck2 = 1;}
        
        if((ck1 | ck2) == 0)break;
    }

    if(l >= r)cout<<-1<<endl;
    else cout<<l + 1<<" "<<r + 1<<endl;
    
    
    
    
}

int32_t main(){
    fast_in_out;

    int test;	cin>>test;
    while(test--)sukuna();
    return 0;
}