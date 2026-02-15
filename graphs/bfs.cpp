void bfs(int start_node) {
    queue<int> q;
    q.push(start_node);
    while(!q.empty()) {
        int el = q.front();
        q.pop();
        if(vis[el]) continue;
        vis[el] = 1;
        for(auto v : g[el]) {
            if(!vis[v]) {
                q.push(v);
            }
        } 
    }
}
