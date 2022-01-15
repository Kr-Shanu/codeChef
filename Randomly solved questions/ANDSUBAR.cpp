#include <iostream>
#include <vector>
using namespace std;


void display_Result(int n)
{
    int value = 1, store = 0, max = 1, i = 0;
    for (i = 1; i <= n; i++)
    {
        if (store > 0)
        {
            store = (store & (i + 1));
            value++;
            if (value > max)
                max = value;
        }
        else
        {
            store = i & (i + 1);
            value = 1;
        }
    }
    cout << max << endl;
}



int main()
{

    // for faster input-output i have included these two lines of code.
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 

    int T, a;
    cin >> T;
    vector<int> values;
    if (T >= 1 && T <= 100000)
    {
        // taking input from the user.
        for (int i = 0; i < T; i++)
        {
            cin >> a;
            if (a >= 1 && a <= 1000000000)
            {
                values.push_back(a);
            }
            else
                cout << "INVALID INPUT !!" << endl;
        }

        // displaying the result using the display result function.
        for (int i = 0; i < T; i++)
        {
            display_Result(values[i]);
        }
    }
    else
        cout << "INVALID VALUE OF T !!" << endl;
    return 0;
}