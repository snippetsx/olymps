#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<stack<int> > stacks(k);
    vector<int> position(n + 1);
    vector<bool> clean(n + 1, false);
    priority_queue<int> clean_dishes;
    for (int i = 0; i < k; i++) {
        int s;
        cin >> s;
        for (int j = 0; j < s; j++) {
            int dish;
            cin >> dish;
            stacks[i].push(dish);
            position[dish] = i;
        }
    }
    vector<pair<int, int> > requests(q);
    for (int i = 0; i < q; i++) {
        cin >> requests[i].first >> requests[i].second;
    }
    vector<string> actions;
    for (auto request : requests) {
        if (request.first == 1) {
            while (!clean[request.second]) {
                int dish = stacks[position[request.second]].top();
                stacks[position[request.second]].pop();
                clean[dish] = true;
                clean_dishes.push(dish);
                actions.push_back("3 " + to_string(position[dish] + 1));
            }
            actions.push_back("1");
            clean_dishes.pop();
        } else {
            clean[request.second] = false;
            stacks[position[request.second]].push(request.second);
            actions.push_back("2 " + to_string(position[request.second] + 1));
        }
    }
    cout << actions.size() - q << endl;
    for (auto action : actions) {
        cout << action << endl;
    }
    return 0;
}