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
ll bigpow(ll b, ll p){
	ll res = 1;
	while(p){
		if(p & 1)
			res = (res * b);
		b = (b * b);
		p >>= 1; // dividing p by 2
	}
	return res;
}
int isPower(int A) {
	for (int b = 1; (long long)b * b <= A; b++){
		for (int p = 2;;p++){
			if(pow(b, p) == A) return 1;
			if(pow(b, p) > A) break;
		}
	}
	return 0;
}

int main(){
	int t, q;
	cin >> n;
}

