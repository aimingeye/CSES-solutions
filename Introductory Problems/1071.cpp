#include <bits/stdc++.h>
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

int main(){
    ll T; cin >> T;
    while(T--){
        ll x, y; cin >> x >> y;
        if(x == y)cout << 1 + (x)*(x-1) << endl;
        if(x > y){
            if(x%2==0)cout << x*x - y + 1 << endl;
            else cout << pow((x-1),2) + y << endl;
        }
        if(x < y){
            if(y%2 != 0)cout << y*y - x + 1 << endl;
            else cout << pow((y-1),2) + x << endl; 
        }
    }
}