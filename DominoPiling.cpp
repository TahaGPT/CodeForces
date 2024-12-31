// https://codeforces.com/problemset/problem/50/A

#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int ans = n / 2;
    int rem = n % 2;
    ans *= m;
    rem *= m;
    ans += rem / 2;
    cout << ans;
}