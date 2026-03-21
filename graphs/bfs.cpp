void bfs(int start_node) {
    queue<int> q;
    q.push(start_node);
    dist[start_node] = 0;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        if(vis[front]) continue;
        vis[front] = 1;
        for(auto v : g[el]) {
            if(!vis[v]) {
              q.push(v);
              dist[v] = dist[front] + 1;
            }
        } 
    }
}
