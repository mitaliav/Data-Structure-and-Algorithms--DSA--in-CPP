#include <iostream>
using namespace std;

//Using Honer's rule is an efficient approach as compared to regular recursion method
double e(int x, int n)
{
    static double s;
    if(n==0)
        return s;
    else
    {
        //The operation should be performed during calling time only
        s=1+x*s/n;
        return e(x,n-1);
    }
}

int main()
{
    cout<<e(2,10);
    return 0;
}
