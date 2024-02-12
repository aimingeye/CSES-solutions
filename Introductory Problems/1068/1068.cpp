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

int main()
{
    fio;
    ll n;
    cin >> n;
    cout << n << " "; 
    while(n!=1)
    {
        if (n & 1)
            n =  3*n + 1;
        else
            n /= 2;
        cout << n << " ";
    }
    cout << "\n";
}