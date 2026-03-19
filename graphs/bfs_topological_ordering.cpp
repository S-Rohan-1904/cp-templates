vi topo;
vi indegree;
void topo_sort_bfs() {
  queue<int> q;
  rep(i,1,g.size()+1) {
    if(indegree[i] == 0) q.push(i);
  }

  while(!q.empty()) {
    int front = q.front();
    q.pop();
    topo.eb(front);

    for(auto v : g[front]) {
      indegree[v]--;
      if(indegree[v]==0) q.push(v);
    }
  }

  if(topo.size() < g.size()) cout<<"Cycle found";
}
