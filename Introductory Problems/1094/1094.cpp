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
    int n, m;
    m = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            m += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << m << endl;
    return 0;
}