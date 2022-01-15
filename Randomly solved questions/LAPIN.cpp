#include <string>
#include <iostream>
using namespace std;

int compare(string s1, string s2)
{ 
    int sum = 0;
    int l = s1.length();
    int temp;
    for (int i = 0; i < l; i++)
    {
        temp = s1.compare(s2);
        sum += temp;
        s1.erase(i, i + 1);
        s2.erase(i, i + 1);
    }
    return sum;
}

void result(string s)
{
    int l, l1;
    string s1, s2;
    l = s.length();
    l1 = l / 2;
    cout<<"Half the length of the given string is = "<<l1<<endl;
    if (l % 2 == 0)
    {
        s1 = s.substr(0, l1);
        s2 = s.substr(l1, l);
    }
    else
    {
        s1 = s.substr(0, l1);
        s2 = s.substr(l1 + 1, l);
    }
    if (compare(s1, s2) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int T, i;
    cin >> T;
    if (T >= 1 and T <= 100)
    {
        string str_list[T];
        for (i = 0; i < T; i++)
        {
            cin >> str_list[i];
        }
        for (i = 0; i < T; i++)
        {
            int temp = str_list[i].length();
            if (temp >= 1 and temp <= 1000)
            {
                result(str_list[i]);
            }
            else
            {
                cout << "Enter a valid string " << endl;
            }
        }
    }
    else
        cout << "Enter a valid value of T" << endl;
    return 0;
}