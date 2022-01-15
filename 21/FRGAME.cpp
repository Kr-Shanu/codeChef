#include <iostream>
#include <vector>
using namespace std;

void displayWinner(vector<int> store)
{
    int a = store[0];
    int b = store[1];
    int c = store[2];
    int d = store[3];

    if (a > b)
        b = b + c;
    else if (a < b)
        a = a + c;
    else
        b = b + c;

    if (a > b)
        b = b + d;
    else if (a < b)
        a = a + d;
    else
        b = b + d;

    if (b > a)
        cout << "S" << endl;
    else
        cout << "N" << endl;
}



int main()
{
    int T;
    cin >> T;
    vector<vector<int> > storeValue;
    if (T >= 1 && T <= 1000)
    {
        for (int i = 0; i < T; i++)
        {
            int a, b, c, d;
            vector<int> store;
            cin >> a >> b >> c >> d;
            if (a >= 0 && a <= 1000000 && b >= 0 && b <= 1000000 && c >= 0 && c <= 1000000 && d >= 0 && d <= 1000000)
            {
                store.push_back(a);
                store.push_back(b);
                store.push_back(c);
                store.push_back(d);
                storeValue.push_back(store);
            }
            else
            {
                cout << "INVALID VALUE OF A,B,C or D" << endl;
                return 0;
            }
        }
    }
    else
        cout << "INVALID VALUE OF T" << endl;

    for (int i = 0; i < T; i++)
    {
        displayWinner(storeValue[i]);
    }

    return 0;
}