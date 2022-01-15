#include <iostream>
#include <vector>
#include <string>
using namespace std;

// This function will give I2 index where the minimum delta j is found.
int index_of_minimum_delta_j(vector<float> delta_j)
{
    int min = delta_j[0], i;
    for (i = 1; i < 4; i++)
    {
        if(delta_j[i]<min)
            min = delta_j[i];
    }
    for ( i = 0; i < 4; i++)
    {
        if(delta_j[i] == min)
            break;
    }
    return i;  
}

// Function to return the index position of minimum, minimum ratio
int index_of_minimum_ratio(vector<float> mr)
{
    // as there are only two element in minimum ratio so i would use only if else to return 
    // the index containing the minimum of minimum ratio.
    if(mr[0] < mr[1])
        return 0;
    else
        return 1;
}

// Function to calculate Zj.
vector<float> calculate_Z_j(vector<float> cb, vector<float> table)
{
    // As from the table we know the first element of table starts from index 1
    // and the next element of x1 occurs after 5 iteration so cb's first element at
    // index 0 is multiplied with i and the next cb element is multiplied with i+5.
    vector<float> z_j;
    for (int i = 1; i < 5; i++)
    {
        z_j.push_back(cb[0]*table[i] + cb[1]*table[i+5]);
    }
    return z_j;
}

// Function to calculate delta j.
vector<float> calculate_delta_j(vector<float> zj, vector<float> cj)
{
    vector<float> delta_j;
    for (int i = 0; i < 4; i++)
    {
        delta_j.push_back(zj[i] - cj[i]);
    }
    return delta_j;
}

// Function to calculate minimum ratio.
vector<float> calculate_minimum_ratio(vector<float> delta_j, vector<float> table)
{   
    // As minimum ratio has only two element so i am pushing them without actual formulation.
    vector<float> mr;
    int index2 = index_of_minimum_delta_j(delta_j) + 1;
    mr.push_back(table[0]/table[index2]);
    mr.push_back(table[5]/table[index2+5]);
    return mr;
}

// Function to transform the whole table.
vector<float> transform_table(vector<float> table, vector<float> mr, vector<float> delta_j)
{
    int index_2 = index_of_minimum_delta_j(delta_j);
    int index_1 = index_of_minimum_ratio(mr);
    
    // This is the division factor.
    float factor_1 = table[index_1*5 + (index_2+1)];

    int i;

    // Now i will manipulate the values in the table which should be divided by factor_1;
    for ( i = (index_1*5); i < (index_1*5+5); i++)
    {
        table[i] = table[i]/factor_1;
    }


    // Here i have changed the index of mr so that i can get the proper subtracting factor.
    if(index_of_minimum_ratio(mr) == 0)
        index_1 = 1;
    else
        index_1 = 0;
    
    // This is the subtracting factor.
    float factor_2 = table[index_1*5 + (index_2+1)];

    // Now i will subtract the values in the table that needs to be subtracted by factor_2.
    for ( i = (index_1*5); i < (index_1*5+5); i++)
    {
        table[i] = table[i] - factor_2;
    }
    return table;
}

// Function to calculate new CB and Basic Variable.
vector<float> transfor_cb_and_bv()
{
    
}

// Function to display table.
void display_table(vector<string> bv, vector<float> cj, vector<float> cb, vector<float> zj, vector<float> delta_j, vector<float> table, vector<float> mr)
{
    cout<<"   BV        CB        XB        X1        X2        S1        S2        MIN.RATIO   "<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"   "<<bv[0]<<"        "<<cb[0]<<"         "<<table[0]<<"         "<<table[1]<<"          ";
    cout<<table[2]<<"         "<<table[3]<<"         "<<table[4]<<"         "<<mr[0]<<endl;
    cout<<endl;
    cout<<"   "<<bv[1]<<"        "<<cb[1]<<"         "<<table[5]<<"         "<<table[6]<<"          ";
    cout<<table[7]<<"         "<<table[8]<<"         "<<table[9]<<"         "<<mr[1]<<endl;
    cout<<endl;
    cout<<endl;

}

int main()
{
    vector<float> table, delta_j, z_j, min_ratio, c_j, c_b;
    vector<string> basic_variable;

    // Asking user to enter the coefficient of the objective function.
    int c1, c2;
    cout<<"Enter the coefficient of the objective function followed by a space"<<endl;
    cin>>c1>>c2;
    // This would help us to get the required value at the end of the iteration
    // And also for filling of C_J.
    c_j.push_back(c1); // for x1
    c_j.push_back(c2); // for x2
    c_j.push_back(0);  // for s1
    c_j.push_back(0);  // for s2

    // Asking user to enter the coefficient of the first subjective function.
    cout<<"Enter the coefficient of x1 and x2 from the first subjective function followed by a space:"<<endl;
    cin>>c1>>c2;
    
    // This would be first element of the table as it is the first Xb value.
    cout<<"Enter the RHS of the first subjective function"<<endl;
    int rhs;
    cin>>rhs;
    table.push_back(rhs);

    // After pushing the first Xb value only we can push the first element of x1 and x2 value
    //  in the table
    table.push_back(c1);
    table.push_back(c2);

    // Pushing the first element of s1 and s2 of the table
    table.push_back(0);
    table.push_back(0);

    // Asking user to enter the coefficient of the second subjective function.
    cout<<"Enter the coefficient of x1 and x2 from the second subjective function followed by a space:"<<endl;
    cin>>c1>>c2;
    
    // This would be second element of the table as it is the second Xb value.
    cout<<"Enter the RHS of the second subjective function"<<endl;
    cin>>rhs;
    table.push_back(rhs);

    // After pushing the second Xb value only we can push the second element of x1 and x2 value
    //  in the table
    table.push_back(c1);
    table.push_back(c2);

    // Pushing the second element of s1 and s2 of the table
    table.push_back(0);
    table.push_back(0);

    // Pushing the values of CB and Basic Variable initially.
    c_b.push_back(0); // for s1
    c_b.push_back(0); // for s2
    basic_variable.push_back("s1"); // initially basic variable would be s1 ans s2
    basic_variable.push_back("s2");

    z_j = calculate_Z_j(c_b, table);

    delta_j = calculate_delta_j(z_j, c_j);

    min_ratio = calculate_minimum_ratio(delta_j, table);

    // Display first table.
    display_table(basic_variable, c_j, c_b, z_j, delta_j, table, min_ratio);


    /*    Initial **************************************************  Part  initialisation  */

    table = transform_table(table, min_ratio, delta_j);

    display_table(basic_variable, c_j, c_b, z_j, delta_j, table, min_ratio);

    return 0;
}