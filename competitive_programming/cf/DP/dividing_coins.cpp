#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll, ll>> vpl;
typedef vector<pair<double, double>> vpd;

#define maxvec(vec) *max_element(vec.begin(), vec.end())
#define minvec(vec) *min_element(vec.begin(), vec.end())
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
#define print(var) cout << var << "\n";
#define print_itrn(seq, n) fo(i, n) print(seq[i])
#define print_itr(seq, n) fo(i, n) cout << seq[i] << " ";
#define OJ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
const int N = 1e5 + 24;
const int mod = 1e9 + 7;
int n, m;
int ksp(int *a, int c){
	int dp[m + 1][c + 1];
	fo(i, m + 1) dp[i][0] = 0;
	fo(j, c + 1) dp[0][j] = 0;
	for (int i = 1; i <= m; i++){
		for (int j = 1; j <= c; j++){
			if(a[i] <= j){
				dp[i][j] = max(a[i] + dp[i - 1][j - a[i]], dp[i - 1][j]);
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return dp[m][c];
}
int main(){
	int t, q;
	cin >> n;
	while(n--){
		cin >> m;
		int a[m + 1];
		fo(i, m) cin >> a[i + 1];
		int sum = 0;
		Fo(i, m) sum += a[i];
		int max_half = ksp(a, sum / 2);
		cout << sum - 2 * max_half << '\n';
	}
	return 0;
}

