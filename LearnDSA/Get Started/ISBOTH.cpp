#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1 && n <= 1000)
    {
        if ((n % 5 != 0) && (n % 11 != 0))
        {
            cout << ("NONE") << endl;
            ;
            return 0;
        }
        else if ((n % 5 == 0) && (n % 11 == 0))
        {
            cout << ("BOTH") << endl;
        }
        else
            cout << "ONE" << endl;
        ;
    }
    else
        cout << ("INVALID INPUT") << endl;

    return 0;
}