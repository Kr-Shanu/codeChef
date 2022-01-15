#include <iostream>
using namespace std;

// function to display result.
void display_Result(int a, int b, int c, int d)
{
    if((a+b+c) <= d)
        cout<<"1"<<endl;
    else 
    {
       if((a+c) <= d || (a+b) <= d)
         cout<<"2"<<endl;
      else
         cout<<"3"<<endl;
    }
}



int main()
{
   int T, a, b, c, d;
   cin>>T;
   int values[T][4];
   if(T>=1 && T<=100)
   {
      for (int  i = 0; i < T; i++)
      {
         cin>>a>>b>>c>>d;
         if(a >= 1 && a <= b && b <= c && c <= d && d <= 100)
         {
            values[i][0] = a;
            values[i][1] = b;
            values[i][2] = c;
            values[i][3] = d;
         }
         else
            cout<<"INVALID INPUT !!"<<endl;
      }
      for (int i = 0; i < T; i++)
      {
         display_Result(values[i][0], values[i][1], values[i][2], values[i][3]);
      }
   }
   else
      cout<<"INVALID VALUE OF T !!"<<endl;
   return 0;
}