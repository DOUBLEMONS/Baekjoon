#include <iostream>
using namespace std;
int a[51];
int b[51];
int c[51];

int W(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return W(20, 20, 20);
	if (a < b && b < c) return W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);

	else return W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
}

int main()
{
	int a = 0, b = 0, c = 0;
	int A, B, C;
	float n = 3;

	for (int i = 0; i <= n; i++)
	{
		cin >> a >> b >> c;
	}

	cin >> A >> B >> C;
	cout << W(a, b, c);

	return 0;
}