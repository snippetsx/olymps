#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n - 1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        cin >> b[i];
    }
    int q;
    cin >> q;
    vector<int> c(q);
    for (int i = 0; i < q; ++i) {
        cin >> c[i];
    }

    vector<long long> cost(n);
    cost[0] = a[0];
    for (int i = 1; i < n; ++i) {
        cost[i] = cost[i - 1] + a[i];
    }

    for (int i = 0; i < q; ++i) {
        int card = c[i] - 1;
        for (int j = card; j < n; j += b[card]) {
            if (j + b[card] < n) {
                cost[j + b[card]] = min(cost[j + b[card]], cost[j] + a[j + b[card]]);
            }
        }
        cout << cost[n - 1] << endl;
    }

    return 0;
}