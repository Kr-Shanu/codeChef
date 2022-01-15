#include <iostream>
#include <vector>
using namespace std;

void display_Result(int x)
{
    if(x%2==0)
        cout<<x<<endl;
    else
        cout<<x+2<<endl;
}



int main()
{

   vector<int> elements;

   int T, a, i;
   cin >> T;
   if (T >= 1 && T <= 100000)
   {
      for (i = 0; i < T; i++)
      {
         cin >> a;
         if (a >= 0 && a <= 1000000)
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