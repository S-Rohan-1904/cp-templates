void topo_sort_dfs(int node) {
  vis[node] = 1;

  for(auto v: g[node]) {
    if(!vis[v]) {
      topo_sort_dfs(v);
    }
  }

  topo.eb(node);
}

reverse(all(topo));
