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
    string s;
    cin >> s;
    bool found = false;
    string diverse_sub_string;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] != s[i + 1])
        {
            found = true;
            diverse_sub_string += s[i];
            diverse_sub_string += s[i + 1];
            break;
        }
        else
            found = false;
    }

    if (found)
    {
        cout << "YES\n";
        cout << diverse_sub_string;
    }
    else
    {
        cout << "NO\n";
    }
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