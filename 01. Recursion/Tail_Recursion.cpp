#include <iostream>
using namespace std;

//As the recursive function call is the last statement in the if block it is a type of tail recursion.
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
    }
} //prints 3 2 1

int main()
{
    int x=3;
    fun(x);
    return 0;
}
