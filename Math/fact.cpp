#include<iostream>
using namespace std;
int main()
{
    int i, fact = 1, n;
    cout<<"Enter any number for factorial:";
    cin>>n; //n =5
    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial of " <<n<<" is : "<<fact;
    return 0;
}
