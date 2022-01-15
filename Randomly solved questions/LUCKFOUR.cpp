#include <iostream>
#include <vector>
using namespace std;

int occurance(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            count++;
    }
    return count;
}



int main()
{
    string s;
    int T;
    cin >> T;
    vector<string> c(T);
    if (T >= 1 and T <= 100000)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> s;
            c[i] = s;
        }
    }
    else
        cout<<"Invalid T"<<endl;
    for (int i = 0; i < T; i++)
    {
        cout<<occurance(c[i])<<endl;
    }
    
    return 0;
}