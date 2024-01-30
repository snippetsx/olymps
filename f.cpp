#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

bool is_good(const vector<int>& sequence) 
{
    for (int i = 0; i < sequence.size() - 3; ++i) 
    {
        if (sequence[i] < sequence[i + 1] && sequence[i + 1] < sequence[i + 2] && sequence[i + 2] < sequence[i + 3]) 
        {
            return false;
        }
    }
    return true;
}

int cnt_goods(int n, int k) 
{
    vector<int> sequence(n, 1);
    int cnt = 0;

    while (true) 
    {
        if (is_good(sequence)) 
        {
            ++cnt;
        }

        int i = n - 1;
        while (i >= 0) 
        {
            sequence[i]++;
            if (sequence[i] <= k) 
            {
                break; 
            }
            sequence[i] = 1;
            --i;
        }

        if (i < 0) 
        {
            break;
        }
    }

    return cnt;
}

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int total = pow(k, n);
    int goods = cnt_goods(n, k);

    double prob = static_cast<double>(goods) / total;
    
    cout << setprecision(12) << prob << endl;

    return 0;
}