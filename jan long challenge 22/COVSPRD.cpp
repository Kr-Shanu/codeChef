#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

double result(double n, double d)
{
    double temp, value;

    if (d <= 10)
        value = pow(2, d);
    else
        value = (pow(2, 10)) * (pow(3, d - 10));

    if (value > n)
        return n;
    else
        return value;
}

int main()
{
    vector<int> store;
    int T;
    cin >> T;
    if (T >= 1 && T <= 300)
    {
        double N, D;
        for (int i = 0; i < T; i++)
        {
            cin >> N >> D;
            if (N >= 1 && N <= 100000000 && D >= 0 && D <= 100000000)
            {
                store.push_back(result(N, D));
            }
            else
                cout << "INVALID INPUT" << endl;
        }
    }
    else
        cout << "INVALID INPUT" << endl;

    for (int i = 0; i < T; i++)
    {
        cout << store[i] << endl;
    }

    return 0;
}