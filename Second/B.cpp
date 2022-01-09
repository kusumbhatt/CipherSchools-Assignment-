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
	Given an integer array nums of length n and an integer target, 
	find three integers in nums such that the sum is closest to target. 
	Return the sum of the three integers.
*/

void solve() {	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int target;
	cin >> target;
	sort(all(a));
	int ans = 1e9;
	for(int i = 0; i < n - 2; i++) {
		int j = i + 1, k = n - 1;
		while(j < k) {
			int sum = a[i] + a[j] + a[k];
			if(abs(sum - target) < abs(ans - target)) 
				ans = sum;
			if(sum > target)
				k--;
			else
				j++;
		}
	}
	cout << ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) 
        solve();
}