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
#define print_itr(seq, n) fo(i, n) cout << seq[i];
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
	n = s.length();
	int ones = 0;
	fo(i, n){
		if(s[i] == '1'){
			s[i] = '_';
			ones++;
		}
	}
	string result;
	int i = 0;
	while (i < n){
		if (s[i] != '2' and s[i] != '_'){
			result.push_back('0');
		} else if(s[i] == '2'){
			fo(j,ones){
				result.push_back('1');
			}
			while(i < n){
				if(s[i] != '_'){
					result.push_back(s[i]);
				}
				i++;
			}
			break;
		}
		i++;
	}
	int flag = 1;
	fo(i, n){
		if(s[i] == '2'){
			flag = 0;
			break;
		}
	}
	if(flag){
		fo(i, ones){
			result.push_back('1');
		}
	}
	print(result);
}

