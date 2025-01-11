// https://codeforces.com/problemset/problem/236/A

#include <iostream>
using namespace std;
int main()
{
    char *arr = new char[123]{'\0'};
    string input;
    cin >> input;
    int l = input.length();
    int n = 0;
    for (int i = 0; i < l; i++)
    {
        if (!arr[input[i]])
        {
            arr[input[i]] = input[i];
            n++;
        }
    }
    if (n & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    delete[] arr;
}