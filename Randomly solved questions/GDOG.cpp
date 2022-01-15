#include <iostream>
using namespace std;

int getCoin(int N, int K)
{
    return N % K;
}

int main()
{
    int T, N, K;
    cin >> T;
    int data_N[T];
    int data_K[T];
    if (T >= 1 and T <= 50)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> N >> K;
            if (N >= 1 and N <= 100000 and K >= 1 and K <= 100000)
            {
                data_N[i] = N;
                data_K[i] = K;
            }
            else
                cout << "INVALID entry of N or K" << endl;
        }
    }
    else
        cout << "Enter a valid vlaue for T" << endl;
    for (int i = 0; i < T; i++)
    {
        cout << getCoin(data_N[i],data_K[i])<<endl;
    }

    return 0;
}