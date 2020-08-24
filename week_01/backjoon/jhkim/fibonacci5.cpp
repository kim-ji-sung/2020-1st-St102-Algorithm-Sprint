#include <iostream>

using namespace std;

int main() {
	int n;
	int dp[20] = { 0 };
	
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n] << endl;

	return 0;
}