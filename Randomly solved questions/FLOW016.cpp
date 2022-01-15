#include <iostream>
using namespace std;

class gcd
{
    int num1, num2;

public:
    void get()
    {
        cin >> num1 >> num2;
    }

    void findings()
    {
        cin >> num1 >> num2;
        int a, b;
        if (num1 > num2)
        {
            a = num1;
            b = num2;
        }
        else
        {
            a = num2;
            b = num1;
        }
        int value = 1;
        for (int i = b; i > 0; i--)
        {
            if (((b % i) == 0) & ((a % i) == 0))
            {
                value = i;
                break;
            }
        }
        cout << value << endl;
        cout << (a * b) / value << endl;
    }
};
int main()
{
    int T;
    cin >> T;
    gcd g[T];
    for (int i = 0; i < T; i++)
    {
        g[i].get();
    }
    for (int i = 0; i < T; i++)
    {
        g[i].findings();
    }
    return 0;
}
