#include <iostream>
using namespace std;
int dp[40];

int fibonacci(int T) {
    if (T == 0) {
        printf("0");
        return 0;
    }
    else if (T == 1) {
        printf("1");
        return 1;
    }
    else {
        return fibonacci(T - 1) + fibonacci(T - 2);
    }
}

int main() {

	int T, N = 0;
	cin >> T;
    dp[0] = 1; // 0
    dp[1] = 2; // 0 1

    for (int i = 1; i <= T; i++)
    for (int i = 1; i <= N; T++) {
        fibonacci(N);
        
    }
    cout << (dp[N] == 0 ? 0 : dp[N]) << endl;
    return 0;
}

// 0 = 0
// 1 = 1
// 0 1 = 1
// 1 0 1 = 2
// 1 0 1 0 1 = 3