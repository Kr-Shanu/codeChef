#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string st = "", temp;
        for (int i = 1; i <= strs[0].size(); i++)
        {

            if (i == strs[0].size())
                temp = strs[0];

            temp = strs[0].substr(0, i);

            for (int j = 1; j < strs.size(); j++)
            {
                if(temp != strs[j].substr(0,i))
                    break;
            }

            st = temp;

        }
        return st;
    }
};

int main()
{

    Solution s;
    vector<string> store;
    store.push_back("flower");
    store.push_back("flask");
    store.push_back("floral");
    cout << s.longestCommonPrefix(store) << endl;
    return 0;
}
