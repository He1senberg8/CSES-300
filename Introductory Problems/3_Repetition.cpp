#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl '\n'

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << (x) << endl;
#else
    #define debug(x)
#endif

const int INF = 1e18;
const int MOD = 1e9 + 7;

void fastIO() {
    ios::sync_with_stdio(0);
    cin.tie(0);
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll extendedGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    ll x1, y1;
    ll g = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll modInverse(ll a, ll mod = MOD) {
    ll x, y;
    ll g = extendedGCD(a, mod, x, y);
    if (g != 1) return -1;
    return (x % mod + mod) % mod;
}

ll binExp(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll modInverseFermat(ll a, ll mod = MOD) {
    return binExp(a, mod - 2, mod);
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void solve() {
    
    string a;
    cin>>a;
    int n=a.size();
    if(a.length()==1){cout<< 1<<endl;return ;}
    else{
        int maxLength=1;
        for(int i=1;i<=n;i++){
            if(a[i]==a[i-1]){
                int ans=1;
                while(a[i]==a[i-1]){
                    ans++;
                    i++;
                }
                i--;
                maxLength=max(ans,maxLength);
            }

        }
        cout<<maxLength<<endl;
    }
    
}

int32_t main() {
    fastIO();
    //int t = 1;
    //cin >> t;
    //while (t--) {
        solve();
   // }
    return 0;
}