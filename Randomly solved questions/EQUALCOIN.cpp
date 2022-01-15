#include <iostream>
#include <vector>
using namespace std;

void display_Result(int x, int y)
{
    if((x%2==0 && y%2==0) || (x%2==0 && y%2!=0 && x>0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    vector<int> x, y;
    int T, i;
    int x_in, y_in;
    cin >> T;
    if (T >= 1 && T <= 1000)
    {
        for (i = 0; i < T; i++)
        {
            cin >> x_in >> y_in;
            if (x_in >= 0 && x_in <= 100000000 && y_in >= 0 && y_in <= 100000000 && (x_in+y_in)>0)
            {
                x.push_back(x_in);
                y.push_back(y_in);
                
            }
            else
                cout << "INVALID INPUT !!" << endl;
        }
        for (i = 0; i < T; i++)
        {
             display_Result(x[i], y[i]);
        }
    }
    else
        cout << "INVALID VALUE OF T !!" << endl;
    return 0;
}