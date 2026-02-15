void dfs(int node) {
    visited[node] = 1;
    for(auto v: g[node]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}
