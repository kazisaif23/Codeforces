//Was there an Array?
#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

void solve()
{
    int n;
    cin >> n;
    int b[n-2];
    bool ok = true;
    for (int i = 0; i < n - 2; i++)
	{
		cin >> b[i];
	}
   for (int i = 0; i < n-4; i++) {
    if (b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) {
        ok = false;
        break;
    }
}
    cout << (ok ? "YES\n" : "NO\n");
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
