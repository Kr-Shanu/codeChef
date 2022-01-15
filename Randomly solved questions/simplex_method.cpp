#include <iostream>
#include <vector>
using namespace std;


// Function to check optimality
bool is_Optimal(vector<float> delta_j)
{
    for (int i = 0; i < delta_j.size(); i++)
    {
        if(delta_j[i]<0)
            return false;
    }
    return true;
}

// This function will return the place value of the minimum delta j.
float smallest_Delta_j(vector<float> delta_j)
{
    float small = delta_j[0];
    for (int i = 1; i < delta_j.size(); i++)
    {
        if(delta_j[i] < small)
            small = delta_j[i];
    }
    int i;
    for (i = 0; i < delta_j.size(); i++)
    {
        if(delta_j[i] == small)
            break;
    }
    return i;
}


// Function to calculta minimum ratio
vector<float> calculate_mr(vector<float> delta_j, vector<float> x1, vector<float> x2, vector<float> s1, vector<float> s2, vector<float> xb)
{
    vector<float> mr;
    float num = smallest_Delta_j(delta_j);
    if(num == 0)
    {
        for (int i = 0; i < 2; i++)
        {
            mr.push_back(xb[i]/x1[i]);
        }
        
    }
    else if(num == 1)
    {
        for (int i = 0; i < 2; i++)
        {
            mr.push_back(xb[i]/x2[i]);
        }
        
    }
    if(num == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            mr.push_back(xb[i]/s1[i]);
        }
        
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            mr.push_back(xb[i]/s2[i]);
        }
    }
    return mr;
}

// Function to calculate zj.
vector<float> calculate_zj(vector<float> cb, vector<float> x1, vector<float> x2, vector<float> s1, vector<float> s2)
{
    vector<float> zj;
    zj.push_back(x1[0]*cb[0] + x1[1]*cb[1]);
    zj.push_back(x2[0]*cb[0] + x2[1]*cb[1]);
    zj.push_back(s1[0]*cb[0] + s1[1]*cb[1]);
    zj.push_back(s2[0]*cb[0] + s2[1]*cb[1]);
    return zj;
}

// Function to calcuate delta j.
vector<float> calculate_delta(vector<float> zj, vector<float> cj)
{
    vector<float> delta_j;
    for (int i = 0; i < 4; i++)
    {
        delta_j.push_back(zj[i] - cj[i]);
    }
    return delta_j;
}

// Function to display table
void display_table(vector<float> cb, vector<float> xb, vector<float> x1, vector<float> x2, vector<float> s1, vector<float> s2, vector<float> mr, vector<float> cj, vector<float> zj, vector<float> delta_j )
{
    cout<<"     CJ-> "<<cj[0]<<"   "<<cj[1]<<"   "<<cj[2]<<"   "<<cj[3]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"CB   XB   X1   X2   S1   S2      M.R"<<endl;
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout<<" "<<cb[i]<<"    "<<xb[i]<<"    "<<x1[i]<<"    "<<x2[i]<<"    "<<s1[i]<<"    "<<s2[i]<<"    "<<mr[i]<<endl;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<"     ZJ->  "<<zj[0]<<"    "<<zj[1]<<"    "<<zj[2]<<"    "<<zj[3]<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"     DJ-> "<<delta_j[0]<<"   "<<delta_j[1]<<"   "<<delta_j[2]<<"   "<<delta_j[3]<<endl;
}

int main()
{
    // Taking vector for all the table element.
    vector<float> delta, cb, xb, x1, x2, s1, s2, cj, zj, mr;

    // values for cj;
    float val1, val2;
    cout << "Enter the coefficient of x1 and x2 of objective function followed by space below" << endl;
    cin >> val1 >> val2;

    //Pushing the values of cj.
    cj.push_back(val1);
    cj.push_back(val2);
    cj.push_back(0); // The cj of s1 will be 0.
    cj.push_back(0); // The cj of s2 will be 0.

    //Pushing the values of xb.
    cout<<"Enter the RHS value of first and second subjective equatio followed by space"<<endl;
    cin>>val1>>val2;
    xb.push_back(val1);
    xb.push_back(val2);

    // Values from first subjective equation.
    cout << "Enter the value of x1 and x2 from first subjective equation followed by space" << endl;
    cin >> val1 >> val2;
    x1.push_back(val1);
    x2.push_back(val2);

    // Values from first subjective equation.
    cout << "Enter the value of x1 and x2 from second subjective equation followed by space" << endl;
    cin >> val1 >> val2;
    x1.push_back(val1);
    x2.push_back(val2);

    s1.push_back(1); // As s1 occurs in first sub. equation so it will have coeff 1.
    s1.push_back(0); // As s1 does not occurs in second sub. equation so it will have coeff 0.


    s2.push_back(0); // As s2 does not occurs in first sub. equation so it will have coeff 0.
    s2.push_back(1); // As s2 occurs in second sub. equation so it will have coeff 1.

    cb.push_back(0);// Cb of s1 is 0.
    cb.push_back(0);// cb of s2 is 0.

    zj = calculate_zj(cb, x1, x2, s1, s2);

    delta = calculate_delta(zj, cj);

    mr = calculate_mr(delta, x1, x2, s1, s2, xb);

    display_table(cb, xb, x1, x2, s1, s2, mr, cj, zj, delta);
    
    cout<<endl;
    cout<<endl;
    if(!is_Optimal(delta))
        cout<<"Form another table it is ❌❌❌ not optimal !!!!!!"<<endl;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;

    return 0;
}