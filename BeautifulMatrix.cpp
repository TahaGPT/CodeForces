// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;
int main()
{
    int num;
    int i_ = 0;
    int j_ = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> num;
            if (num == 1)
            {
                i_ = i;
                j_ = j;
            }
        }
    }

    num = i_ > 2 ? i_ - 2 : 2 - i_;
    num += j_ > 2 ? j_ - 2 : 2 - j_;
    cout << num;
}