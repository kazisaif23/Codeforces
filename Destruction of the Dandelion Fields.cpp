#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using ll = long long;
using vll = vector<ll>;

void solve()
{
    ll n;
    cin >> n;
    vll f(n), of;
    ll sum = 0, sum2 = 0, sum3 = 0;

    for (auto &i : f)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        if (f[i] % 2 == 1)
            of.push_back(f[i]);
        else
            sum += f[i];
    }

    sort(of.rbegin(), of.rend());
    int s = of.size();

    if (s == 0)
    {
        cout << 0 << "\n";
        return;
    }
    int size = (s + 1) / 2;

    if (s == 1)
    {

        sum += of[0];
        cout << sum << "\n";
        return;
    }

    for (int i = 0; i < size; i++)
        sum2 += of[i];

    cout << sum + sum2 << "\n";
}

int main()
{
    fastread();
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
