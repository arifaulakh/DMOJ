#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define MAXN 100005
#define endl "\n"
#define readln(x) getline(cin, x);
typedef long long ll;
typedef long double ld;
typedef pair<int, int>pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<int, pii> edge;
ll fpow(ll x, ll n, ll mod){if (n==0) return 1%mod; ll u = fpow(x, n/2, mod); u = (u*u)%mod; if (n%2==1)u = (u*x)%mod;return u;}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int N, K, parent[MAXN], rnk[MAXN];
vector<edge> edges, result;

void make_set(int v){
    parent[v] = v;
    rnk[v] = 0;
}
int find_set(int v){
    if (v==parent[v])return v;
    return parent[v] = find_set(parent[v]);
}
void union_set(int a, int b){
    int ar = find_set(a);
    int br = find_set(b);
    if (ar!=br){
        if (rnk[ar]>rnk[br]){
            parent[br] = ar;
        }
        else{
            parent[ar]=br;
            if (rnk[ar]==rnk[br])rnk[br]++;
        }
    }
}
int main(){
    freopen("data.txt","r",stdin);
    cin >> N >> K;
    for (int i = 1; i<N; i++){
        int w; cin >> w;
        edges.pb(mp(w, mp(i,i+1)));
    }
    for (int i = 1; i<=(N-K); i++){
        edges.pb(mp(0, mp(i,i+K)));
    }
    for (int i = 1; i<=N; i++){
        make_set(i);
    }
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto e : edges){
        if (find_set(e.second.first)!=find_set(e.second.second)){
            cost+=e.first;
            result.pb(e);
            union_set(e.second.first, e.second.second);
        }
    }
    cout << cost << endl;
    return 0;
}
