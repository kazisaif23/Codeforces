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
    int a, b, c;
    cin >> a >> b >> c;
    if ((c & 1))
    {
        if (b > a)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    else
    {
        if (a > b)
        {
            cout << "First\n";
        }
        else
            cout << "Second\n";
    }
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