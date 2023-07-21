#include <iostream>
using namespace std;

int main()
{
    int a, b, c, ans, s;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    cout<<s*(s-a)*(s-b)*(s-c);
    return 0;
}
