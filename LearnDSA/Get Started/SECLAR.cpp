#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= 1 && a <= 1000000000 && b >= 1 && b <= 1000000000 && c >= 1 && c <= 1000000000)
    {
        int small, max;
        if (a <= b && a <= c)
            small = a;
        else if (b <= a && b <= c)
            small = b;
        else
            small = c;

        if (a >= b && a >= c)
            max = a;
        else if (b >= a && b >= c)
            max = b;
        else
            max = c;

        cout << a + b + c - small - max << endl;
    }
    else
        cout << "INVALID INPUT" << endl;

    return 0;
}