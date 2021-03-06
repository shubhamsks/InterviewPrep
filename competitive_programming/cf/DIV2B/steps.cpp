#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vp;
#define maxvec(vec) *max_element(vec.begin(), vec.end())
#define minvec(vec) *min_element(vec.begin(), vec.end())
#define vi(n,name) vector<int> name(n)
#define vl(n, name) vector<ll> name(n)
#define vp(n, name) vector<pi> name(n)
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
ll n, m, t, q;
ll x, y, k;

bool F(ll mid,ll xc, ll yc){
	if(x + xc*mid <= n and x + xc*mid >= 1 and y + yc*mid <= m and y + yc*mid >= 1){
		return true;
	}
	return false;
}

int get_moves(ll lo, ll hi, ll xc, ll yc){
	while(lo <= hi){
		ll mid = lo + (hi - lo + 1) / 2;
		if (F(mid, xc, yc)){
			lo = mid;
		} else {
			hi = mid - 1;
		}
		if(F(hi, xc, yc)){
			return hi;
		}
		if(!F(lo, xc, yc)){
			return 0;
		}
	}
	return lo;
}
int main(){
	// OJ	
	cin >> n >> m;
	cin >> x >> y;
	cin >> k;
	ll moves = 0;
	fo(i,k){
		ll xc, yc;
		cin >> xc >> yc;
		t = get_moves(0, max(n, m), xc, yc);
		moves += t;
		x = x + xc * t;
		y = y + yc * t;
	}
	print(moves);
}

