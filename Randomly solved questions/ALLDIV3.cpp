/*

Here in this question, suppose we have an array of integers
and we want to know how many of them are divisible by 3 and how many are not

Concept -> 1 : if we devide any number by 3 then the remainder that we will get
               will be either 0,1 or 2.

concept -> 2 : We have to only consider the ones who have remainder either 1 or 2.

Concept -> 3: If we have one 1 and one times 2 and if we add 1 in 2 and subtract 1
              from 1 then we can make both of them (1 and 2) divisible by 3.

              Similarly if we have any number suppose 16 and 17, if we devide them
              with 3 then we will receive remainder as 1 and 2 respectively.
              Moreover if we add 1 to 17 and subtracted 1 from 16 then we will
              get 15 and 18 inplace of 16 and 17 which are divisible by 3.

Concept -> 5: If we find the remainder of all the elements of array by deviding
              them with 3 and if the sum of all the remainder comes out to be
              divisible by 3 or 0 then we can find the solution else we cannot
              make all the elements divisible by 3.

Concept -> 5: Suppose if we have 6 times one and 3 times 2 then we require
              3 times the operation to make 3 times 1 and 3 times 2 to make it into
              divisible by 3 and then there would be 3 times 1 available.

              If we closely dig into this topic then with experimentation we can find
              that if there are 6 times 1 or 6 times 2 then we required (6/3)*2 = 4
              operations, similarly if we have 9 times 1 and 9 times 2 then we would
              require (9/3)*2 = 6 operations to make all divisible by 3.

Conclusion : With all the above concept what we can do is, we can take out sum of
             all the remainders of elements in the array and check if it is divisible by 3
             or not, if yes and if sum comes out to be 0 then we donot need to do any operation
             and we can return 0, but if the sum is not equal to 0 then we will need to
             find how many operations are done, for that we would require to check how many
             remainders are 1 and how many are 2, if no of 1 is greater than 2 then
             we will take {number of 2's present operation + ((no.of 2 - no.of 1)/3)*2}
             as number of operation required.

             finally if sum is not divisible by 3 then we will return -1.

*/

#include <iostream>
#include <vector>
using namespace std;

int result(vector<int> elements)
{
    int n_div = 0, n_div1 = 0, n_div2 = 0, value, sum = 0;
    for (int i = 0; i < elements.size(); i++)
    {
        value = elements[i] % 3;
        sum = sum + value;
        if (value != 0)
        {
            n_div++;
            if (value == 1)
                n_div1++;
            else if (value == 2)
                n_div2++;
        }
    }

    if (sum % 3 != 0)
        return -1;
    else
    {
        if (sum == 0)
            return 0;

        if (n_div2 == n_div1)
            return n_div1;

        if (n_div1 > n_div2)
            return n_div2 + ((n_div1 - n_div2) / 3) * 2;

        if (n_div2 > n_div1)
            return n_div1 + ((n_div2 - n_div1) / 3) * 2;
    }

    return -1;
}

int main()
{
    vector<vector<int> > elements;
    int T, N, in;
    cin >> T;
    if (T >= 1 && T <= 1000)
    {
        for (int i = 0; i < T; i++)
        {
            vector<int> get;
            cin >> N;
            if (N >= 2 && N <= 100000)
            {
                for (int j = 0; j < N; j++)
                {
                    cin >> in;
                    if (in >= 1 && in <= 1000000000)
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