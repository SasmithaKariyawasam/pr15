#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int exp,base;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exp;

    int ans = pow(base,exp);

    cout<<"Answer is: "<<ans;
    return 0;
}
