#include <iostream>
#include <string>
#include <vector>
using namespace std;


int displayResult(string st, int k)
{   
    int xorValue;
    vector <int> store;
    for (int i = 0; i < st.length();)
    {
        string sub = st.substr(i,i+k);
        int subInt = stoi(sub);
        store.push_back(subInt);
        i = i+k;
    }

    xorValue = store[0];
    for (int i = 1; i < store.size(); i++)
    {
        xorValue = xorValue^store[i];
    }
    
    string ss = to_string(xorValue);
    int count = 0;
    for (int i = 0; i < ss.length(); i++)
    {
        if(ss[i] == '1')
            count++;
    }

    return count;

}





int main()
{
    vector <int> storeOne; 
    int T;
    cin >> T;
    if (T >= 1 && T <= 10)
    {
        for (int i = 0; i < T; i++)
        {
            int K, N;
            cin>>N>>K;
            if (K >= 1 && K <= 200000 && N >= 1 && N <= 200000)
            {
                string st;
                cin >> st;
                if (st.length() == N && (st.find('1') != string::npos || st.find('1') != string::npos || st.find('1') != string::npos))
                {
                    storeOne.push_back(displayResult(st, K));
                }
            }
        }
    }
    else
        cout<<"INVALID VALUE OF T!!"<<endl;

    
    for (int i = 0; i < storeOne.size(); i++)
    {
        cout<<storeOne[i]<<endl;
    }
    

    return 0;
}