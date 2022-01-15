#include <iostream>
#include <vector>
using namespace std;

void display_Result(int x, int y, int a , int b, int k)
{
    if((x+k*a) > (y+k*b))
        cout<<"DIESEL"<<endl;
    else if((x+k*a) < (y+k*b))
        cout<<"PETROL"<<endl;
    else
        cout<<"SAME PRICE"<<endl;
}

int main()
{
    vector<double> x, y, a, b, k;
    int T, i;
    double a_in, x_in, y_in, b_in, k_in;
    cin >> T;
    if (T >= 1 && T <= 1000)
    {
        for (i = 0; i < T; i++)
        {
            cin >> x_in >> y_in >> a_in >> b_in >> k_in;
            if (x_in >= 0 && x_in <= 1000 && y_in >= 0 && y_in <= 1000 && a_in >= 0 && a_in <= 1000 && b_in >= 0 && b_in <= 1000 && k_in >= 0 && k_in <= 1000)
            {
                x.push_back(x_in);
                y.push_back(y_in);
                a.push_back(a_in);
                b.push_back(b_in);
                k.push_back(k_in);
            }
            else
                cout << "INVALID INPUT !!" << endl;

        }
        for (i = 0; i < T; i++)
        {
             display_Result(x[i], y[i], a[i], b[i], k[i]);
        }
    }
    else
        cout << "INVALID VALUE OF T !!" << endl;
    return 0;
}