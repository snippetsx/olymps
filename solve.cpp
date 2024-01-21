#include <iostream>
#include <vector>
#include <queue>


using namespace std;

int main()
{
    int n;
    int r = 0;
    int a = 1;
    int b = 1;
    int d = 0, s = 0;
    cin >> n;
    while(n > 0)
    {
        d = n % 2;
        if (d == 1)
        {
            r = r + b;
        }
        if (d + s < 2)
        {
            n = n / 2;
            s = d;
        }
        int t = a;
        a = b;
        b = t + b;
    }
    cout << r;

}