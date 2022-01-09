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
 
const int N = 1e5 + 100;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
 
/*
	You are a professional robber planning to rob houses along a street. 
	Each house has a certain amount of money stashed, the only constraint 
	stopping you from robbing each of them is that adjacent houses have 
	security systems connected and it will automatically contact the police 
	if two adjacent houses were broken into on the same night.Given an integer 
	array nums representing the amount of money of each house, return the maximum
	amount of money you can rob tonight without alerting the police.
*/

int dp[N];
int calc(vector <int> &nums, int idx) {
    if(idx >= nums.size())
        return 0;
    if(dp[idx] != -1)
        return dp[idx];
    int ans = 0;
    ans = max(ans, nums[idx] + calc(nums, idx + 2));
    ans = max(ans, calc(nums, idx + 1));
    return dp[idx] = ans;
}
void solve() {	
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	memset(dp, -1, sizeof dp);
	int ans = calc(a, 0);
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