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
    vi vrr(n);
    int neg_count = 0, pos_count = 0, ops = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vrr[i];
        if (vrr[i] == -1)
        {
            neg_count++;
        }
        else
            pos_count++;
    }

    while (pos_count < neg_count or (neg_count & 1))
    {
        ops++;
        pos_count++;
        neg_count--;
    }
    cout << ops << endl;
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
