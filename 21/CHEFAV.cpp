#include <iostream>
#include <vector>
#include <string>
using namespace std;

string favString(string st)
{
    if (st.length() < 8)
    {
        return "WA";
    }

    if (st.find("chef") == string::npos)
    {
        return "WA";
    }
    else if (st.find("code") == string::npos)
    {
        return "WA";
    }

    size_t foundChef = st.find("chef");
    size_t foundCode = st.find("code");
    if (foundCode < foundChef)
    {
        return "AC";
    }
    else
        return "WA";
}

int main()
{
    vector <string> storage;
    int T;
    cin >> T;
    if (T >= 1 && T <= 10)
    {
        vector<string> store;
        for (int i = 0; i < T; i++)
        {
            int N;
            cin >> N;
            string st;
            cin>>st;
            if(st.length() == N)
            {
                storage.push_back(favString(st));
            }
            else
                cout<<"INVALID INPUT !!"<<endl;
        }
    }
    else
        cout << "INVALID T" << endl;


    for (int i = 0; i < T; i++)
    {
        cout<<storage[i]<<endl;
    }
    

    return 0;
}