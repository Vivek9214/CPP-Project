#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Value of A:";
    cin>>a;
    if (a %2 == 0)
    {
        cout<<a-1;
    }
    else 
    {
        cout<<a;
    }
    return 0;
}
