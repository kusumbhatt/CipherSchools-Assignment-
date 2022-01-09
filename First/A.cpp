#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ll long long
#define pii pair<int, int>
#define sz(x) (int)x.size()
#define fr first
#define sc second
#define all(a) a.begin(), a.end()
#define int long long
 
const int N = 500 + 100;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
 
/*
	Given an array nums containing n distinct numbers in the range [0, n], 
	return the only number in the range that is missing from the array.
*/

void solve() {	
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int miss = n * (n + 1) / 2 - sum;
	cout << miss;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) 
        solve();
}