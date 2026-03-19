void bfs(int start_node) {
    queue<int> q;
    q.push(start_node);
    vis[start_node] = 1; 
    while(!q.empty()) {
        int el = q.front();
        q.pop();
        for(auto v : g[el]) {
            if(!vis[v]) {
                q.push(v);
                vis[v] = 1;
            }
        } 
    }
}
