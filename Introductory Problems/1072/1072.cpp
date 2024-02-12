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

void calc(ll n){
	for(int i = 1; i <n+1; i++){
		ll p = i*i;
		ll t_pairs = (p)*(p-1)/2;
		ll a_pairs = 4*(i-1)*(i-2);
		cout << t_pairs - a_pairs << endl;
	}
}

int main(){
 	fio;
	ll n;cin>> n;
	calc(n);
 }