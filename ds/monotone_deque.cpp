// This is for maintaining the min element in k sized window in  O(k)

struct monotone_dequeue {
  deque<int> dq;
  void insert(int x) {
    while(!dq.empty() && dq.back() > x) dq.pop_back();
    dq.push_back(x);
  }

  void remove(int x) {
    if(dq.front() == x) dq.pop_front();
  }

  int get_min() {
    return dq.front();
  }
};
