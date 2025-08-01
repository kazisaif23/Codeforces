#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    ll c;
    cin >> n >> c;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    int coins = 0;
    sort(a.rbegin(), a.rend());
    int multiplier = 1;

    for (int i = 0; i <= n - 1; ++i)
    {
        if (a[i] * multiplier <= c)
        {
            multiplier *= 2;
        }
        else
            coins++;
    }

    cout << coins << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}
