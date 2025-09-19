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
    int tcount = 0, ccount = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            tcount++;
        }
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            ccount++;
        }
        if (ccount == tcount - ccount)
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
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
