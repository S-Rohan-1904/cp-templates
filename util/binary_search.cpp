// Binary Search

bool check(int mid) {
  if(true) return 1;
  return 0;
}

int binary_search(const vi& nums) {
  int lo = 0,hi = nums.size()-1;
  int ans = -1;
  while(lo <= hi) {
    int mid = lo + (hi-lo)/2;
    if(check(mid)) {
      hi = mid-1;
      ans = mid;
    } else lo = mid+1;
    
  }
  return ans;
}
