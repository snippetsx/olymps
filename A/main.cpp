#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;
    int tmp;

    cin >> n >> k;
    tmp = n % k;
    cout << min(tmp, k - tmp);
    
    return 0;
}