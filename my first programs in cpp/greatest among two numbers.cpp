#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"enter two numbers : ";
    cin>>x;
    cin>>y;
    if(x>y)
    {
        cout<<x <<" is greater than " << y;
    }
    else if(x==y)
    {
        cout<<" both numbers are equal ";
    }
    else
    {
        cout<< y <<" is greater than "<< x;
    }
    return 0;
}
