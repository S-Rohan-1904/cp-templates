/**
 * All Divisors (sqrt N)
 * Time Complexity: O(sqrt N)
 * Space Complexity: O(number of divisors)
 * Usage: Returns an unsorted vector of all divisors of x.
 * Note: If you need them in order, call sort(ans.begin(), ans.end()) after.
 */

vector<ll> divisors(ll x) {
    vector<ll> ans;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            ans.push_back(i);
            if (i * i != x)
                ans.push_back(x / i);
        }
    }
    return ans;
}
