// https://www.codechef.com/FZBZ21C/problems/CAN_REACH
// Above is the link to the question.


#include <iostream>
#include <vector>
using namespace std;

// If both the coordinates x and y given are divisible by k then we can say that he can 
// reach the hostel from college gate with k steps.


void display_Result(vector<int> temp)
{
    if((temp[0]%temp[2] == 0) && (temp[1]%temp[2] == 0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}



int main()
{
    vector<vector<int> > data ;
    int T, i, x, y, k;
    cin >> T;
    if (T >= 1 && T <= 600)
    {
        for (i = 0; i < T; i++)
        {
            vector<int> temp;
            cin >> x >> y >> k;
            if ( k >= 1 && k <= 1000 && x >= -1000 && x <= 1000 && y <=1000 && y >= -1000)
            {
                temp.push_back(x);
                temp.push_back(y);
                temp.push_back(k);
            }
            else
                cout << "INVALID INPUT !!" << endl;
            data.push_back(temp);
        }
    }
    else
        cout << "INVALID VALUE OF T !!" << endl;
    
    for ( i = 0; i < T; i++)
    {
        display_Result(data[i]);
    }
    

    return 0;
}
