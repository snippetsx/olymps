//https://techno-cup.ru/media/docs/%D0%A3%D1%81%D0%BB%D0%BE%D0%B2%D0%B8%D1%8F_%D0%BF%D0%B5%D1%80%D0%B2%D0%BE%D0%B3%D0%BE_%D0%BE%D1%82%D0%B1%D0%BE%D1%80%D0%BE%D1%87%D0%BD%D0%BE%D0%B3%D0%BE_%D1%80%D0%B0%D1%83%D0%BD%D0%B4%D0%B0_%D0%A2%D0%B5%D1%85%D0%BD%D0%BE%D0%BA%D1%83%D0%B1%D0%BA%D0%B0_20212022.pdf

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
                if (a[i] % 2 == 1)
                {
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
