#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

void solve() {
    ll n, m;
    cin >> n >> m;
    vi ov(n);
    for(int i=0;i<n;i++) cin >> ov[i];
    sort(ov.rbegin(), ov.rend());

    ll sum = 0;
    for(int i=0;i<n&&m>0;i++){
        
            sum+=ov[i]*m;
            m--;
    }
    cout << sum << "\n";
}


int main() {
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
    solve();
     }
    return 0;
}
