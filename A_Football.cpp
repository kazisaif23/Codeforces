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
    string s;
    cin >> s;
    int count = 1;
    bool flag = false;
    vector<char> v(s.begin(), s.end());
    if (v.size() < 7)
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                count++;
                if (count >= 7)
                {
                    flag = true;
                    break;
                }
                        }
            else
                count = 1;
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
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