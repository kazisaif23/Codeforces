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
    int n, k;
    cin >> n >> k;
    vi th(n);
    int time_need;
    for (int i = 0; i < n; i++)
    {
        cin >> th[i];
    }
    int ch = th[k - 1];
    sort(th.begin(), th.end());
    int pos = find(th.begin(), th.end(), ch) - th.begin();

    ll waterlavel = 0;
    bool flag = true;

    for (int i = pos; i < n - 1; i++)
    {
        waterlavel = waterlavel + th[i + 1] - th[i];
        if (waterlavel > th[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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