// https://www.codechef.com/COOK135C/problems/ODDSEVENS
// Above is the link to the problem.


#include <iostream>
#include <vector>
using namespace std;



// Function to give the proper result of the question.
// The problem is very simple we have been given the 
// number of fingers shown by both the participant 
// if sum of both is divisible by 2 then print "BOB"
// else print "Alice".




void value(vector<int> elements)
{
    if ((elements[0] + elements[1]) % 2 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
}

int main()
{
    vector<vector<int> > elements;
    int T, a, b;
    cin >> T;
    if (T >= 1 && T <= 1000)
    {
        for (int i = 0; i < T; i++)
        {
            vector<int> get;
            cin >> a >> b;
            if (a <= 5 && a >= 1 && b <= 5 && b >= 1)
            {
                get.push_back(a);
                get.push_back(b);
                elements.push_back(get);
            }
            else
                cout << "INVALID INPUT" << endl;
        }
    }
    else
        cout << "INVALID T" << endl;

    for (int i = 0; i < T; i++)
    {
        value(elements[i]);
    }

    return 0;
}
