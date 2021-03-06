#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 101
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll N, W, w[MAXN], v[MAXN], dp[100005], ans = 0;
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> W;
    for (int i = 1; i<=N; i++){
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i<=N; i++){
        for (int j = W; j>=w[i]; j--){
            dp[j] = max(dp[j],v[i]+dp[j-w[i]]);
        }
    }
    for (int i = 1; i<=W; i++){
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}