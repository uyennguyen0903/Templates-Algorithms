struct Edge {
    int u,v;
    bool avail;
};

class Graph {
private :
    int n;
    vector<Edge> e;
    vector<vector<int> > adj;
    vector<int> pos;
    list<int> path;

    void dfs(list<int>::iterator it, int u) {       //Builds the Euler path by Hierholzer's_algorithm
        for(; pos[u] < adj[u].size(); ++pos[u]) {
            int id = adj[u][pos[u]];
            if (e[id].avail) {
                e[id].avail = false;
                int v = e[id].u + e[id].v - u;
                dfs(path.insert(it,u),v);
            }
        }
    }

public :
    Graph(int n) : n(n) {
        adj.assign(n, vector<int>());
    }

    void addEdge(int u, int v) {
        adj[u].pb(e.size());
        adj[v].pb(e.size());
        e.pb({u,v,false});
    }

    vector<int> EulerPath() {
        for(Edge &p : e)
            p.avail = true;
        path.clear();
        pos.assign(n,0);

        //Build the list of odd-vertex
        vector<int> odd;
        For(i,0,n-1)
            if (adj[i].size() % 2 == 1)
                odd.pb(i);
        if (odd.empty())  {
            odd.pb(0);
            odd.pb(0);
        }
        if (odd.size() > 2)
            return vector<int>();

        dfs(path.begin(), odd[0]);
        path.insert(path.begin(), odd[1]);
        return vector<int>(path.begin(),path.end());
    }
};