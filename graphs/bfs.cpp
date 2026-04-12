void bfs(int start) {
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        if(vis[front]) continue;
        vis[front] = 1;
        for(auto child : g[front]) {
            if(!vis[child]) {
              q.push(child);
              dist[child] = dist[front] + 1;
            }
        } 
    }
}
