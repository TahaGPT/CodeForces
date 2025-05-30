// https://codeforces.com/problemset/problem/1/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    unsigned long long int num1 = ((n + a - 1) / a);
    unsigned long long int num2 = ((m + a - 1) / a);
    cout << num1 * num2 << endl;

}


