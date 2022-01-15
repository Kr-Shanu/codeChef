#include <iostream>
using namespace std;

// Function to find prime number or not.
void prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count > 0)
    {
        cout << "no" << endl;
        return;
    }
    cout << "yes" << endl;
}

int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 20)
    {
        int ar[T];
        int temp, i;
        for (i = 0; i < T; i++)
        {
            cin >> temp;
            if (temp >= 1 && temp <= 100000)
                ar[i] = temp;
            else
                cout << "INVALID INPUT" << endl;
        }
        for (i = 0; i < T; i++)
        {
            prime(ar[i]);
        }
    }
    else
        cout << "INVALID T" << endl;
    return 0;
}