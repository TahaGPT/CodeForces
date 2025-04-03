// https: // codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n = 0;
    cin >> a >> b;
    while (a <= b)
    {
        n++;
        a = a * 3 * n;
        b = b * 2 * n;
    }
    cout << n << endl;
}