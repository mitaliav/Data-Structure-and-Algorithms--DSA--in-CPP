#include <iostream>
using namespace std;

//As the recursive function call is called in a circular manner it is a type of indirect recursion.

//The signature of the funB need to be written before calling it in funA
void funB(int n);

//funA and funB both call each other until the conditional statement terminates
void funA(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        funA(n/2);
    }
}

int main()
{
    funA(20);
    return 0;
}
