
// lab[u]*-1 = child(i);
//

int getRoot(vector<int>& lab, int u) {
    while (lab[u] >= 0) u = lab[u];
    return u;
}

void dsu(vector<int>& lab, int u, int v) {
    if (lab[u] > lab[v]) swap(u, v);
    lab[u] += lab[v];
    lab[v] = u;

}

int calc(vector<pii>& edges, int a, int n) {
    vector<int> lab(n + 1);
    For(i, 1, n) lab[i] = -1;
    for (auto i: edges) {
        int u = getRoot(lab, i.first);
        int v = getRoot(lab, i.second);
        if (u != v) dsu(lab, u, v);
    }
    return n + lab[getRoot(lab, a)] - 1;
}


