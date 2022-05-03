#include <iostream>
using namespace std;

//As the recursive function is passed in the parameter of a recursive function call it is nested recursion.
int fun(int n)
{
    if(n>100)
        return n-10;
    return fun(fun(n+11));
}

int main()
{
    int r;
    //Any value entered in the parameters below 100 will give 91 as output because from the tracing tree
    //we understand that the function will come to fun(101) and then 101-10=91
    r=fun(95);
    cout<<r;
    return 0;
}
