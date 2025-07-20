#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;

void solve()
{
    ll n;
    cin >> n;
    vector<pll> laptop(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> laptop[i].first >> laptop[i].second;
    }
    bool flag = false;
    sort(laptop.begin(), laptop.end());
    for (ll i = 1; i < n; i++)
    {
        if (laptop[i].second < laptop[i - 1].second)
        {

            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Happy Alex\n";
    }
    else
        cout << "Poor Alex\n";
}

int main()
{
    fastread();
    // ll t;
    // cin >> t;
    // while (t--)
    {
        solve();
    }
    return 0;
}