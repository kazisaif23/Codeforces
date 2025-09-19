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
    ll n; cin>>n;
    vll arr(n);
    ll total_xor=0;
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
        total_xor ^= arr[i];
    }
    if( n%2==1) cout<<total_xor<<endl;
    else{
        if(total_xor==0){
            cout<<total_xor<<endl;
        }
        else cout<<"-1\n";
    }
    
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
