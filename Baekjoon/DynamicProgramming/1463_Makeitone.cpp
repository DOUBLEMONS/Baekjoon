#include <iostream>
using namespace std;
int dp[1000001]; 

int main() {
	int X;
	cin >> X;
	dp[2] = dp[3] = 1;

	for (int i = 4; i <= X; i++) {
		if (dp[i / 2] && i % 2 == 0) dp[i] = dp[i / 2] + 1;

		if (dp[i / 3] && i % 3 == 0) dp[i] = dp[i] ? min(dp[i], dp[i / 3] + 1) : dp[i / 3] + 1;

		if (dp[i - 1]) dp[i] = dp[i] ? min(dp[i], dp[i - 1] + 1) : dp[i - 1] + 1;
	}
	cout << (dp[X] == 0 ? 0 : dp[X]) << endl;
	return 0;
}

