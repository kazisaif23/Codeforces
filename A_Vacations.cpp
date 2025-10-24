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
    ll n;
    cin>>n;
    vll cg(n);
    for( ll i=0; i<n ;i++){
        cin>>cg[i];
    }
    bool gym=false;
    bool contest=false;
    ll rest=0;
    for( ll i=0; i<n ;i++){
        if( cg[i]==0 ){
            rest++;
            gym=false;
            contest =false;
        }
        else if( cg[i]==1){
            gym=false;
            if(contest){
                rest++;
                contest=false;
            }
            else contest=true;
        }

        else if ( cg[i]==2){
            contest=false;
            if(gym){
                rest++;
                gym=false;
            }
            else 
            gym=true;
        }
        else if(cg[i]==3){
            if(contest){
                gym=true;
                contest=false;
            }
           else if( gym){
            contest= true;
            gym=false;
           }
        }
    }
    cout<<rest<<endl;
}

int main() {
    fastread();
    // ll t;
    // cin >> t;
    // while (t--)
    {
    solve();
     }
    return 0;
}