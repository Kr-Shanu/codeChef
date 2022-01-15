#include <iostream>
using namespace std;

void rectangle(int a, int b, int c, int d)
{
    if (a == b and c == d)
    {
        cout << "YES" << endl;
    }
    else if (a == c and b == d)
    {
        cout << "YES" << endl;
    }
    else if (a == d and b == c)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    rectangle(a, b, c, d);
    return 0;
}

// after the introduction of stl only i will be abl
// to go through questions on cod chef.