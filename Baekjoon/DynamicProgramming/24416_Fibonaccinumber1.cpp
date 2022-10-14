#include <iostream>
using namespace std;
int f[41];

int fib(int n) {
    if (n == 1 || n == 2)
    return 1;  
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    
    f[1] = f[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        f[i - 2] = (f[i - 1] / f[i - 2]);
        f[i - 1] = (f[i - 1] / f[i - 1]);
        f[i] =  f[i - 1] + f[i - 2];
    }

    return f[n] - 1;
}

int main()
{
    int N;
    cin >> N;
    cout << fib(N) << " " << fibonacci(N);

    return 0;
}
