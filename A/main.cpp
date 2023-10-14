#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(unsigned long long value)
{
	unsigned long long rt = (unsigned long long)sqrt(value);
	if (value == 2 || value == 3)
		return 1;
	if (value < 2 || value % 2 == 0 || value % 3 == 0)
		return 0;
    for (unsigned long long i = 5; i <= rt; i += 6)
    {
        if (value % i == 0 || value % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    int n;
    int sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if (is_prime(sum) == 0)
        {
            cout << n << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << i << ' ';
            }
            cout << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 1){
                    a[i] = -1;
                    n = n - 1;
                    break;

                }
            }
            cout << n << '\n';
            for (int i = 0; i < n; i++)
            {
                if(a[i] != -1)
                {
                    cout << i << ' ';
                }
            }
            cout << '\n';

        }
    }

}