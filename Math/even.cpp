#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the Digits: ";
    cin>>a;
    
    if ( a%2 != 0)
    {
        cout<<a+1;           
    }

    else 
    {
        cout<<a;
    }
    
    return 0;
}