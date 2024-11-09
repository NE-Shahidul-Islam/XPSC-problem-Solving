#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(nullptr) -> sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--) {
    int n, m; 
    string s, wat;
    cin >> n >> m >> s;
    vector <int> ind(m);
    for (int &x : ind) cin >> x, --x;
    cin >> wat;
    sort(wat.begin(), wat.end());
    sort(ind.begin(), ind.end());
    ind.erase(unique(ind.begin(), ind.end()), ind.end());
    for (int i = 0; i < (int) ind.size(); ++i) s[ind[i]] = wat[i];
    cout << s << '\n';
  }  
  return 0;
}
