#include <iostream>
#include <string>
using namespace std;


// To check the presence of the digit in the number.
bool isPresent(int num, int search)
{
    string st = to_string(num);
    string sr = to_string(search);
    if(st.find(sr)>=0 && st.find(sr)<st.size())
        return true;
    return false;
}


void display_Result(int num, int d)
{
    int count = 0;
    while(isPresent(num,d))
    {
        count++;
        num++;
    }
    cout<<count<<endl;
}


int main()
{
    // for faster input-output i have included these two lines of code.
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 

   int T, a, b;
   cin>>T;
   int values[T][2];
   if(T>=1 && T<=100000)
   {
      for (int  i = 0; i < T; i++)
      {
         cin>>a>>b;
         if(a >= 1 && a <= 1000000000 && b >= 0 && b <= 9)
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