#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<set>
#include<unordered_map>
#include<map>
#include<unordered_set>
#include<hash_map>
#include<cmath>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define clr(x) memset(x, 0, sizeof(x))
#define init(x, a) memset(x, a, sizeof(x))
 
const int mod = 1000000007;
int mpow(int base, int exp); 
const int N = 1e5+4;
vi g[N];
int a[N];
int dp[N];
void dfs(int node, int parent) {
    dp[node] = a[node];
    int mx = 0;
    for(auto child : g[node]) {
        if(child == parent) continue;
        dfs(child,node);
        mx = max(mx,dp[child]);
    }
    dp[node] += mx;
}
int main()
{
    int i, n, k, j, u, v;
    cin >> n;
    fo(i,n - 1) cin >> u >> v, g[u].pb(v),g[v].pb(u);
    Fo(i, 1, n + 1) cin >> a[i];
    dfs(1,0);
    cout << dp[1] << "\n";
	return 0; 
} 
 