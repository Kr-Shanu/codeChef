// https://www.codechef.com/FZBZ21C/problems/CAN_REACH 
// Above is the link to the question.


#include <iostream>
#include <vector>
using namespace std;



// If the candy length is 0, then he cannot take any byte.
// Rest if there is some length of the candy then the number of bites
// that it can take is length/k and it will give an integer division answer.
// In rest cases return -1.

int display_Result(vector<int> temp)
{
    if(temp[0] == 0)
        return 0;
    if(temp[0]%temp[1] == 0)
        return temp[0]/temp[1];
    else
        return -1;
}



int main()
{
    vector<vector<int> > candy ;
    int T, i, n, k;
    cin >> T;
    if (T >= 1 && T <= 100000)
    {
        for (i = 0; i < T; i++)
        {
            vector<int> temp;
            cin >> n >> k;
            if ( k >= 1 && k <= 1000000 && n >= 0 && n <= 1000000)
            {
                temp.push_back(n);
                temp.push_back(k);
            }
            else
                cout << "INVALID INPUT !!" << endl;
            candy.push_back(temp);
        }
    }
    else
        cout << "INVALID VALUE OF T !!" << endl;
    
    for ( i = 0; i < T; i++)
    {
        cout<<display_Result(candy[i])<<endl;
    }
    

    return 0;
}
