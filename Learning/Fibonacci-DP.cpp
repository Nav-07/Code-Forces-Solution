#include <iostream>
#include <vector>
using namespace std;

// Recursion Method
int fib(int n) {
    int result = 0;
    if (n == 0 || n == 1)
        result = 1;
    else 
        result = fib(n-1) + fib(n-2);
    return result;
}

// Memoization Method, Yes Memoization not Memorization
long long int fib_memo(int n, vector<long long int> memo) {
    long long int result = 0;
    if (memo[n] != 0)
        return memo[n];
    else if (n == 0 || n == 1)
        result = 1;
    else 
        result = fib_memo(n-1, memo) + fib_memo(n-2, memo);
    memo[n] = result;
    return result;
}

// main
int main() {
    vector<long long int> list(30);
    for (long long int i = 0; i < 30; i++)
        cout << fib_memo(i, list) << " ";
    list.clear();
    return 0;
}