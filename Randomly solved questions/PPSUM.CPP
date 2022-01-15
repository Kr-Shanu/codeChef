// This program cannot be submitted to the code chef directly as i am still unaware of how to
// store the input and display it in a sequential order without wasting memory space by taking
//  a lot of space in arrays.



# include <iostream>
using namespace std;

// class with member function to store the value of n and d and to evaluate the required operation
class summation
{

    // All the elements below in the class has to be public as we need to access it in main function.
    public:
    int n,d;

    // Function to get the value from the user.
    void get()
    {
        cout<<"Enter the value of n and d below"<<endl;
        cin>>n>>d;
    }

    // Function to display the value entered by the user.
    void disp()
    {
        cout<<"Entered value of n and d are :\n"<<n<<" "<<d<<endl;
    }

    // Function to calculate the sum of number from 1 to n.
    int sum(int n)
    {
        int add = 0;
        for(int i = 1;i<=n;i++)
        {
            add += i;
        }
        return add;
    }

    // Function which would add the sum again and again d number of times.
    void cycle_count()
    {
        int add2 = sum(n);
        for(int i=1;i<d;i++)
        {
            add2 = sum(add2);
        }
        cout<<"The required output = "<<add2<<endl;
    }
};


// Main block where all the functions will be called and required output is generated.
int main()
{
    summation obj;
    obj.get();
    obj.disp();
    obj.cycle_count();
    return 0;
}