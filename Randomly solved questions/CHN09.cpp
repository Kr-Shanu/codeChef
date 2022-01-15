#include <iostream>
#include <string>
#include <vector>
using namespace std;

void color(string s)
{
    int n1, n2, i;
    n1 = 0;
    n2 = 0;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            n1++;
        else if (s[i] == 'b')
            n2++;
        else
            cout << "Wrong Input " << endl;
    }
    if(n1%2!=0 and n2%2!=0)
    {
        if(n1==n2)
            cout<<n1<<endl;
        else if(n1>n2)
            cout<<n1-n2<<endl;
        else if(n2>n1)
            cout<<n2-n1<<endl;
    }
    else
    {
        if(n1==n2)
            cout<<"0"<<endl;
        else if(n1>n2)
            cout<<n2<<endl;
        else if(n2>n1)
            cout<<n1<<endl;
    }
}

vector<string> take_input(void)
{
    vector<string> v;
    int T;
    string s;
    cin >> T;
    if(T>=1 and T<=100)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> s;
            if(s.size()>=1 and s.size()<=100)
                v.push_back(s);
            else
                cout<<"Please enter a small string "<<endl;
        }
    }
    else
        cout<<"INVALID T"<<endl;
    return v;
}

void result(vector<string> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        color(s[i]);
    }
}

int main()
{
    vector<string> s;
    s = take_input();
    result(s);
    return 0;
}