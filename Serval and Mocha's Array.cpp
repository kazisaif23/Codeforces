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
    vll arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(arr[i], arr[j]) <= 2)
            {
                flag = 1;
            }
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
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
