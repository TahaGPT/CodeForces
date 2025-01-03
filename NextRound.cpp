// https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int num;
    int total = 0;
    int prev = 0;
    for(int i = 0 ; i  < n; i++)
    {
        cin >> num;
        if(i < k && num)
            {total++;
            prev = num;
            }
            else if(num == prev && num)
            {
                total++;
            }
            else
                break;
    }
    cout << total;
}