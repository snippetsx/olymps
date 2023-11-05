#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int a;
    int b;
    int c;
    cin >> n >> a >> b >> c;
    if ((a <= b && a <= c))
    {
        cout << n - ((b + c) - a);
    }
    else
    {
        cout << -1;
    }
    
}