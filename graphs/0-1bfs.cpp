void zero_one_bfs(int start) {
    deque<int> dq;

    dist[start] = 0;
    dq.push_back(start);

    while (!dq.empty()) {
        int u = dq.front();
        dq.pop_front();

        for (auto &edge : g[u]) {
            int v = edge.ff;
            int weight = edge.ss;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                
                if (weight == 0) {
                    dq.push_front(v);
                } else {
                    dq.push_back(v);
                }
            }
        }
    }
}
