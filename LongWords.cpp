// https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <cstring>
using namespace std;

string conv(int n)
{
    string temp = "";
    while (n > 0)
    {
        temp += '0' + n % 10;
        n /= 10;
    }
    n = temp.length();

    // Manual reversing using a two-pointer approach
    for (int i = 0; i < n / 2; i++)
    {
        // Swap characters
        char str = temp[i];
        temp[i] = temp[n - i - 1];
        temp[n - i - 1] = str;
    }

    return temp;
}

int main()
{
    int n;
    cin >> n;
    string *col = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(col + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (col[i].length() > 10)
        {
            col[i] = col[i][0] + conv(col[i].length() - 2) + col[i][col[i].length() - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << col[i] << endl;
    }
}