// https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        *(arr + i) = new int[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> *(*(arr + i) + j);
        }

        for (int j = 0; j < 3; j++)
        {
            sum += *(*(arr + i) + j);
            if (sum >= 2)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}