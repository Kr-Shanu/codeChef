// https://www.codechef.com/FZBZ21C/problems/MKGPLNKS
// ABOVE LINK OF THE PROBLEM IS GIVEN.


#include <iostream>
#include <vector>
using namespace std;



// If we look at the test cases then we can see that if there is variation of
// black and white , let's take an example :
//  WWBBWW , here we can see that first there is 2 W, then 2 B and then again 2 W
// and if we perform only one operation on middle B's then all will change to while.
// But if we have "WWBBWWWBBW", in this example we can see than we have first 2 W, then 
// 2 B's, then 3 W's, then 2 B's and then 1 W, and here we need to perform 2 operation 
// with both the B's to make it W, and with close observation we can see that ,
// there are 5 variation W-B-W-B-W and we required 2 operation and if we hadd three
// variations then we would have required 1 operation that means if we take the integer 
// division of number of variation of the colour by 2 then we can find the solution. 

// So here i found the number of vaiation and then devided it by 2 , integer division
// to be very specific and got the answer.


int result(vector<char> elements)
{
    int count = 1, temp = elements[0];
    for (int i = 1; i < elements.size(); i++)
    {
        if(temp == elements[i])
            temp = elements[i];
        else
        {
            count++;
            temp = elements[i];
        }

    }
    return int(count/2);
}



int main()
{
    vector<vector<char> > elements;
    int T, N;
    char in;
    cin >> T;
    if (T >= 1 && T <= 100000)
    {
        for (int i = 0; i < T; i++)
        {
            vector<char> get;
            cin >> N;
            if (N >= 1 && N <= 100000)
            {
                for (int j = 0; j < N; j++)
                {
                    cin >> in;
                    if (in == 'B' || in == 'W')
                        get.push_back(in);
                    else
                        cout << "INVALID Ai" << endl;
                }
            }
            else
                cout << "INVALID INPUT" << endl;
            elements.push_back(get);
        }
    }
    else
        cout << "INVALID T" << endl;

    for (int i = 0; i < T; i++)
    {
        cout << result(elements[i]) << endl;
    }

    return 0;
}
