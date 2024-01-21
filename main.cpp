#include <iostream>
#include <vector>
#include <queue>


using namespace std;


/*
     1 2 3 4 5
===============
1 || 0 1 0 1 0
2 || 1 0 1 0 0
3 || 0 1 0 1 1
4 || 1 0 1 0 1
5 || 0 0 1 1 0
*/


void bfs(const vector< vector<int> > &matrix)
{
    vector<bool> visited(matrix.size(), false);
    
    queue<int> t;

    t.push(0);
    visited[0] = true;

    

    while (!t.empty())
    {
        int x = t.front();
        t.pop();
    }
}

void dfs(const vector< vector<int> > &matrix)
{}
 
int main()
{
    vector<vector<int> > m = {
        { 0, 1, 0, 1, 0 },
        { 1, 0, 1, 0, 0 },
        { 0, 1, 0, 1, 1 },
        { 1, 0, 1, 0, 1 },
        { 0, 0, 1, 1, 0 }
    };

    bfs(m);
}



#define ll long long
#define inf (ll)(1e9)
#define db double
#define debug cerr << LINE << "\n"


/*void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> deg(n);
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        --a; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        deg[a].first++;
        deg[b].first++;
    }
    for (int i = 0; i < n; i++) deg[i].second = i;
    sort(deg.begin(), deg.end());
    for (int i = 0; i < n; i++) {
        sort(g[i].begin(), g[i].end(), [&](int l, int r) {
            return deg[l].first < deg[r].first;
        });
    }
    int cnt = 0;
    int was = inf;
    while (!deg.empty()) {
        int x = deg.back().first;
        while (deg.back().first == x) deg.pop_back();
        was = x;
        cnt++;
        sort(deg.begin(), deg.end(), [&](pair<int, int> a, pair<int, int> b) {
            while (g[a.second].back() >= x) g[a.second].pop_back();
            a.first = g[a.second].size();
            while (g[b.second].back() >= x) g[b.second].pop_back();
            b.first = g[b.second].size();
            return a.first < b.first;
        });
    }
    cout << cnt << "\n";
}
*/
