#include <bits/stdc++.h>
using namespace std;

#define int long long int

int memo[100][100];

int gridTraveler(int m, int n) {
	if(memo[m][n] > 0) return memo[m][n];
	if(m == 1 && n == 1) return 1;
	if(m == 0 || n == 0) return 0;

	memo[m][n] = gridTraveler(m-1, n) + gridTraveler(m, n-1);
	return memo[m][n];
}

void solve() {
	int m, n; cin >> m >> n;
	int res = gridTraveler(m, n);
	cout << res << "\n";
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}