// https://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    string num;
    cin >> num;
    for(int i = 1 ; i < n ;i++)
    {
        if(num[i - 1] == num[i])
        {
            c++;
        }
    }
    cout << c << endl;
}