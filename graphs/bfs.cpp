void bfs(int start) {
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    vis[start] = 1;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        for(auto child : g[front]) {
            if(!vis[child]) {
              vis[child] = 1;
              q.push(child);
              dist[child] = dist[front] + 1;
            }
        } 
    }
}
