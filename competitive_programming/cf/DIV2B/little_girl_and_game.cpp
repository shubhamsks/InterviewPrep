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

int main(){
	#ifndef ONLINE_JUDGE	
	OJ
	#endif
	int t, q;
	string s;
	cin >> s;
	vi freq(26);
	n = s.length();
	fo(i, n) freq[s[i] - 'a'] += 1;
	int odds = 0;
	for (auto f: freq){
		if(f % 2 != 0){
			odds++;
		}
	}
	int to_remove = odds - 1;
	if(odds == 1 or odds == 0){
		puts("First");
		return 0;
	}
	if(to_remove % 2 == 0){
		puts("First");
	} else {
		puts("Second");
	}
}

