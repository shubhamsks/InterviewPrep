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
#define vi(n,name) vector<int> name(n)
#define vl(n, name) vector<ll> name(n)
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
double vp, vd, t, f, c, dp;
int main(){
	OJ
	int  q;
	cin >> vp >> vd >> t >> f >> c;
	dp = t * vp;
	int ans = 0;
	if(vd < vp){
		puts("0");
		return 0;
	}
	while(dp < c){
		double td = dp/(vd - vp);
		dp = dp + td * vp;
		if (dp >= c)
			break;
		double t_back = dp/vd + f;
		dp = dp + t_back * vp;
		ans++;
	}
	print(ans);
}


