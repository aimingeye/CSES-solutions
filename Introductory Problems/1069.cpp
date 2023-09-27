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
    string s;
    cin >> s;
    int count, mx;
    count = 1;
    mx = 1;
    for(int i = 0; i < size(s) - 1; i++)
    {
        if(s[i] == s[i+1]){
            count++;
            mx = max(count, mx);
        }
        else
        {
            mx = max(count, mx);
            count = 1;
        }
    }
    cout << mx << endl;

}