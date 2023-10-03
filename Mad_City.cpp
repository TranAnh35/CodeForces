#include <bits/stdc++.h>
using namespace std;
#define pb push_back

void solve() {
    int n, a, b;
    cin >> n >> a >> b, --a, --b;
    vector <vector <int>> adj(n);
    vector <int> in(n);
    for (int i = 0, u, v; i < n; ++i) {
        cin >> u >> v, --u, --v;
        adj[u].pb(v), adj[v].pb(u);
        in[u]++, in[v]++;
    }
    if (a == b) {
        cout << "NO\n";
        return;
    }
    queue <int> q;
    for (int i = 0; i < n; ++i) if (in[i] == 1) {
        q.push(i);
    }
    vector <bool> cyc(n, true);
    vector <int> par(n, -1);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        cyc[v] = false;
        for (int u : adj[v]) if (cyc[u]) {
            par[v] = u, in[u]--;
            if (in[u] == 1) {
                q.push(u);
            }
        }
    }
    if (cyc[b]) {
        cout << "YES\n";
        return;
    }
    int to = b;
    while (!cyc[to]) {
        to = par[to];
    }
    vector <int> dis(n, -1);
    q.push(to), dis[to] = 0;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int u : adj[v]) if (dis[u] == -1) {
            dis[u] = dis[v] + 1;
            q.push(u);
        }
    }
    if (dis[a] <= dis[b]) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}