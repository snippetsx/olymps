#include <iostream>

using namespace std;

int b()
{
    int n;
    int k;
    int tmp;

    cin >> n >> k;
    tmp = n % k;
    cout << min(tmp, k - tmp);
    
    return 0;
}

int c()
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
