#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 1000006
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

vector<int> a, b;
set<int> s;
int main(){
    freopen("data.txt","r",stdin);
    // ofstream cout("backforth.out");
    // ifstream cin("backforth.in");
    for (int i = 1; i<=10; i++){
        int x; cin >> x;
        a.push_back(x);
    }
    for (int i = 1; i<=10; i++){
        int x; cin >> x;
        b.push_back(x);
    }
    for (auto u : a){
        int sum = 1000;
    }
    return 0;
}