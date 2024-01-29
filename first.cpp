#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int min(vector <int> &m, int x)
{
    int min_val = m[x];
    for (int i = x; i < m.size(); i++)
    {
        if (min_val > m[i])
        {
            min_val = m[i];
        }
    }
    return min_val;
}

int main() {
    int n;
    int req;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> req;
    for (int i = 0; i < req; i++)
    {
        int req_type, id;
        cin >> req_type >> id;
        if (req_type == 1)
        {
            cout << min(a, id);
        }
        else if (req_type == 2)
        {
            a[i] *= -1;
        }
        
    }
    return 0;
}
