#include <iostream>
#include <vector>
using namespace std;

// function to display the result.
void display_Result(int a, int b)
{
   if(b == 0)
      cout<<"Solid"<<endl;
   else if(a == 0)
      cout<<"Liquid"<<endl;
   else
      cout<<"Solution"<<endl;
}


int main()
{
   int T, a, b;
   cin>>T;
   int values[T][2];
   if(T>=1 && T<=20)
   {
      for (int  i = 0; i < T; i++)
      {
         cin>>a>>b;
         if(a>=0 && a<=100 && b>=0 && b<=100 && (a+b)>0)
         {
            values[i][0] = a;
            values[i][1] = b;
         }
         else
            cout<<"INVALID INPUT !!"<<endl;
      }
      for (int i = 0; i < T; i++)
      {
         display_Result(values[i][0], values[i][1]);
      }
   }
   else
      cout<<"INVALID VALUE OF T !!"<<endl;
   return 0;
}