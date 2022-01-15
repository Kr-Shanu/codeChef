#include <iostream>
using namespace std;


void counting(int c, int d, int l)
{
    if(l%4 == 0)
    {
        if(l <= (c+d)*4 || l >= (d-c/2)*4)
        {
            cout<<"yes"<<endl;
            return;
        }
        cout<<"no"<<endl;
    }
    else
        cout<<"no"<<endl;
}




int main()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= 100000)
    {
        int c[T], d[T], l[T];
        int temp_c, temp_d,temp_l, i;
        for (i = 0; i < T; i++)
        {
            cin >> temp_c>>temp_d>>temp_l;
            if (temp_c >= 1 && temp_c <= 1000000000)
                c[i] = temp_c;
            else
                cout << "INVALID INPUT" << endl;
            if (temp_d >= 1 && temp_d <= 1000000000)
                d[i] = temp_d;
            else
                cout << "INVALID INPUT" << endl;
            if (temp_l >= 1 && temp_l <= 1000000000)
                l[i] = temp_l;
            else
                cout << "INVALID INPUT" << endl;
        }
        for (i = 0; i < T; i++)
        {
            counting(c[i],d[i],l[i]);
        }
    }
    else
        cout << "INVALID T" << endl;
    return 0;
}