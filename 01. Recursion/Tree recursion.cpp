#include <iostream>
using namespace std;

//As the recursive function call is called more than once it is a type of tree recursion.
void fun(int n)
{
    if (n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(5);
    return 0;
}
