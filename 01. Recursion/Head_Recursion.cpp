#include <iostream>
using namespace std;

//As the recursive function call is the first statement in the if block it is a type of head recursion.
void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
} //prints 1 2 3

int main()
{
    int x=3;
    fun(x);
    return 0;
}
