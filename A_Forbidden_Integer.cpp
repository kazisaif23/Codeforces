#include <bits/stdc++.h>
using namespace std;
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using ll = long long;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n" << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << "\n";
    }
    else
    {
        if (k == 1 || (k == 2 && n % 2 == 1))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << (n - 3) / 2 + 1 << endl;
                for (int i = 0; i < (n - 3) / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << 3 << "\n";
            }
        }
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
