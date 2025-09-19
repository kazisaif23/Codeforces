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
    ll n,a,b;
    cin>>n>>a>>b;
    if( a+b+2<=n or ( a==b and a==n)) cout<<"Yes\n";
    else cout<<"No\n";
    
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
