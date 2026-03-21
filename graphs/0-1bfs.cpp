void zero_one_bfs(int start) {
    deque<int> dq;

    dist[start] = 0;
    dq.push_front(start);

    while (!dq.empty()) {
        int front = dq.front();
        dq.pop_front();

        if(vis[front]) continue;
        vis[front] = 1;

        for (auto &[v,w] : g[front]) {
            if (dist[v] > dist[front] + w) {
                dist[v] = dist[front] + w;
                if (w == 0) {
                    dq.push_front(v);
                } else {
                    dq.push_back(v);
                }
            }
        }
    }
}
