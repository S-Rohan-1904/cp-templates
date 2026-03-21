void dijkstra(int start_node) {
    priority_queue<pii> pq;
    pq.push({0, start_node});
    dist[start_node] = 0;

    while(!pq.empty()) {
        auto [_, top]= pq.top();
        pq.pop();

        if(vis[top]) continue;
        vis[top] = 1;

        for(auto [v, w] : g[top]) {
            if(dist[v] > dist[top] + w) {
                dist[v] = dist[top] + w;
                pq.push({-dist[v], v});
            }
        }
    }
}
