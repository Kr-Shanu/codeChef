// In this solution i am getting partially correct answer and for that i 
// i need to check the index out of bound case,

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;


    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}


string displayResult(string st)
{
    int length = st.size();

    string sub;

    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < ceil(length / i); j++)
        {
            if((j+1) == ceil(length/i))
                sub = st.substr(j);
            else
                sub =  st.substr(j, j + i);


            if (isPrime(stoi(sub, 0, 2)))
                return "Yes";
        }
    }

    return "No";
}



int main()
{
    vector <string> store;
    int T;
    cin >> T;
    if (T >= 1 && T <= 2.5*10000)
    {
        for (int i = 0; i < T; i++)
        {
            string st;
            cin>>st;
            if (st.size() <= 10000)
            {
                store.push_back(displayResult(st));
            }
            else
                cout << "INVALID INPUT" << endl;
        }
    }
    else
        cout<<"INVALID INPUT!!"<<endl;

    
    for (int i = 0; i < T; i++)
    {
        cout<<store[i]<<endl;
    }
    

    return 0;
}