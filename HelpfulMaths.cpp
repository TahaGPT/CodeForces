// https://codeforces.com/problemset/problem/339/A

#include <iostream>
using namespace std;


int main()
{
    string st;
    cin >> st;
    int min = 0;
    for(int i = 0 ; i < st.length(); i+= 2)
    {
        min = i;
        for(int j = i + 2; j < st.length(); j+= 2)
        {
            if(st[min] > st[j])
                min = j;
        }

        if(min != i)
        {   
            st[i] += st[min];
            st[min] = st[i] - st[min];
            st[i] -= st[min];
        }
    }
    cout << st;
}