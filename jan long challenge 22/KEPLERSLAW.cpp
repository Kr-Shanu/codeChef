#include <iostream>
#include <vector>
using namespace std;


string displayResult(double a, double b, double c, double d)
{
    double temp1 = (a*a)/(c*c*c);
    double temp2 = (b*b)/(d*d*d);
    if( temp1 == temp2)
        return "Yes";
    else
        return "No";
}


int main()
{
    vector <string> results;
    int T;
    cin>> T;
    if(T>=1 && T<=10000)
    {
        double T1, T2, R1, R2;
        for (int i = 0; i < T; i++)
        {
            cin >> T1>>T2>>R1>>R2;
            if(T1>=1 && T1<=10 && T2>=1 && T2<=10 && R1>=1 && R1<=10 && R2>=1 && R2<=10)
            {
                results.push_back(displayResult(T1, T2, R1, R2));
            }
            else
                cout<<"INVALID INPUT"<<endl;
        }
        
    }
    else
        cout<<"INVALID INPUT OF T"<<endl;


    for (int i = 0; i < T; i++)
    {
        cout<<results[i]<<endl;
    }
    

    return 0;
}