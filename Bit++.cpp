// https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    string *inputs = new string[n];
    for (int i = 0; i < n; i++)
    {
        int add = 0;
        int sub = 0;
        cin >> *(inputs + i);

        for (int j = 0; j < (*(inputs + i)).length(); j++)
        {
            if ((*(inputs + i))[j] == '+')
            {
                add++;
            }
            else if ((*(inputs + i))[j] == '-')
            {
                sub++;
            }

            if (add == 2)
            {
                ans++;
                add = 0;
            }
            else if (sub == 2)
            {
                ans--;
                sub = 0;
            }
        }
    }
    cout << ans;
}