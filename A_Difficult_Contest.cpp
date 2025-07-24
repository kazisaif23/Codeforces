#include <bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

    void solve() {
    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    string result;

    // all T 
    result += string(freq['T'], 'T');
    // Then all F
    result += string(freq['F'], 'F');
    // Then all N
    result += string(freq['N'], 'N');
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (c != 'F' && c != 'T' && c != 'N') {
            result += string(freq[c], c);
        }
    }

    cout << result << '\n';
}

int main() {
    fastread();
    ll t;
    cin >> t;
    while (t--)
    {
    solve();
     }
    return 0;
}