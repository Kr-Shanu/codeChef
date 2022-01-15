#include <iostream>
#include <vector>
using namespace std;

void display_Result(int x)
{
   int value = 0, j = -1;
   while (value <= x)
   {
      j++;
      value = value | j;
   }
   cout << j << endl;
}



int main()
{
   // for faster input-output i have included these two lines of code.
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   vector<int> elements;

   int T, a, i;
   cin >> T;
   if (T >= 1 && T <= 100000)
   {
      for (i = 0; i < T; i++)
      {
         cin >> a;
         if (a >= 0 && a <= 1000000000)
         {
            elements.push_back(a);
         }
         else
            cout << "INVALID INPUT !!" << endl;
      }
      for (i = 0; i < T; i++)
      {
         display_Result(elements[i]);
      }
   }
   else
      cout << "INVALID VALUE OF T !!" << endl;
   return 0;
}