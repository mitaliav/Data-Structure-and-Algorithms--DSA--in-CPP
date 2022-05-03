#include <iostream>
using namespace std;

//Using Memoization is an efficient approach as it helps to avoid excessive recursion
int F[10];

int mfib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n];
    }
}

int main()
{
    int i;
    //initializing all the values of the global array as -1 because it is not a fibonacci number
    for(i=0;i<=10;i++)
        F[i]=-1;
    cout<<mfib(7);
    return 0;
}
