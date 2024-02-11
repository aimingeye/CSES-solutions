#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
 
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define fio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
 
const ll MOD = 1e9 + 7;

void solve(){
    ll n; cin>> n;
    if(n == 1){
        cout << 1<< endl;
        return;
    }
    ll a[n + 1];
    fill_n(a, n+1, 0);
    a[0] = 1;
    a[1] = 1;
    for(ll i = 2; i < n+1; i++){
        if(i < 7){
            a[i] = a[i - 1]*2;
        }
        else{
            a[i] += 2*a[i - 1] - a[i - 7];
            a[i] = a[i]%MOD;
            if(a[i]<0) a[i] += MOD;
        }
    }
    cout << a[n] << endl;
    return;
}

int main(){
    fio;
    solve();
    return 0;
}