#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Digits: ";
    cin>>a;
    if ( a < 0 )
    {
        cout << a*-1;
    }
    else
    {
        cout << a;
    }
    
    return 0;
}