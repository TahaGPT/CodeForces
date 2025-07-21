#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int r = 0;
    int it = 5;
    for(int i = x; i > 0 && it > 0;)
    {
        if(i >= it)
        {
            r += i/it;
            i %= it;
        }
        else {
            it = i;
        }
    }
    cout << r;
}