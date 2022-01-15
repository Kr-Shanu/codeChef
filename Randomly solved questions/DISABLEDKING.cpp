// https://www.codechef.com/COOK135C/problems/DISABLEDKING
// Above is the link to the given problem.


#include <iostream>
#include <vector>
using namespace std;

/*
    We know that here we want to reach to the top right corner
    of chess board, and the only operation that it can do is 
    going up, dowv, vertical up and down and the only restriction
    it has is that, it cannot go right or left in the lateral direction,
    and if we generalise this idea and if we take some test cases and
    try to draw the movement of the king then we can generalise a fact 
    that if there is nxn boxes and if we want to go the corner and if n
    is odd then it will require n-1 movement and if n is odd then it will 
    require n movement and hence i formulated this idea and got the solution.
*/



int main()
{
    vector <int> elements;
    int T,N;
    cin >> T;
    if (T >= 1 && T <= 500)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> N;
            if (N <= 500 && N >= 2)
                elements.push_back(N);
            else
                cout << "INVALID INPUT" << endl;
        }
    }
    else
        cout << "INVALID T" << endl;

    for (int i = 0; i < T; i++)
    {
        int value = elements[i];
        if(value%2 == 0)
            cout<<value<<endl;
        else
            cout<<value-1<<endl; 
    }

    return 0;
}
