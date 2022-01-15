#include <iostream>
#include <vector>
using namespace std;

void display(int n)
{
    vector<int> factors;
    int no_of_fac = 0;
    for (int i = 1; i <= n ; i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            no_of_fac++;
        }
    }
    cout << (no_of_fac) << endl;
    for (int i = 0; i < factors.size(); i++)
    {
        cout << factors[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 1000000)
        display(n);
    else
        cout << ("INVALID INPUT!!") << endl;

    return 0;
}