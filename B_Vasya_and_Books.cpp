#include <bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
int main() {
    fastread();
    int n;
    cin >> n;
    vector<int> a(n), b(n), pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;  // pos[val] = position in a[]
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<bool> taken(n, false);
    int idx = 0; // where we are in a[]
    for (int i = 0; i < n; i++) {
        int current = b[i];
        int cnt = 0;
        if (!taken[pos[current]]) {
            while (idx < n && a[idx] != current) {
                taken[pos[a[idx]]] = true;
                idx++;
                cnt++;
            }
            taken[pos[a[idx]]] = true;
            idx++;
            cnt++;
        }
        cout << cnt << " ";
    }
    cout << "\n";
    return 0;
}
