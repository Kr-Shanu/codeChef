#include <iostream>
#include <string>
#include <math.h>
using namespace std;










// To check the presence of the digit in the number.
bool isPresent(int num, int search)
{
   string st = to_string(num);
   string d = to_string(search);
   if (st.find(d) >= 0 && st.find(d) < st.size())
      return true;
   return false;
}

// function specially to target the search element 0.
string new_val(int num, int search)
{
   string st = to_string(num);
   string s = to_string(search);
   for (int i = st.find(s); i < st.size(); i++)
   {
      st[i] = '1';
   }
   return st;
}


// for all the integer d other than 0, 
// here the first occurance of element will increment by 1 and rest all will be 0.
string all_other(int num, int search)
{
   string st = to_string(num);
   string s = to_string(search);
   int pos = st.find(s);
   int want = search+1;
   char val = (char)(want);
   st[pos] = val;
   for (int i = pos+1; i < st.size(); i++)
   {
      st[i] = '0';
   }
   return st;
}

// function to display result.
void display_Result(int num, int d)
{
   if (!isPresent(num, d))
   {
      cout << "0" << endl;
      return;
   }

   if(d==0)
   {
      string new_result = new_val(num, d);
      int target = stoi(new_result);
      cout << target - num << endl;
   }
   else
   {
      string new_result = all_other(num, d);
      int target = stoi(new_result);
      cout << target - num << endl;
   }
}

int main()
{

   // for faster input, output i have included these two lines of code
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int T, a, b;
   cin >> T;
   int values[T][2];
   if (T >= 1 && T <= 100000)
   {
      for (int i = 0; i < T; i++)
      {
         cin >> a >> b;
         if (a >= 1 && a <= 1000000000 && b >= 0 && b <= 9)
         {
            values[i][0] = a;
            values[i][1] = b;
         }
         else
            cout << "INVALID INPUT !!" << endl;
      }
      for (int i = 0; i < T; i++)
      {
         display_Result(values[i][0], values[i][1]);
      }
   }
   else
      cout << "INVALID VALUE OF T !!" << endl;
   return 0;
}