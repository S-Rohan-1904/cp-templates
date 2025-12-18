/**
 * Prime Factorization (sqrt N)
 * Time Complexity: O(sqrt N)
 * Space Complexity: O(log N) distinct prime factors
 * Usage: Returns vector of {prime, exponent} pairs.
 * Note: Efficient for single queries up to N = 10^14.
 */

using ii = pair<ll, ll>;

vector<ii> Factors(ll x) {
    vector<ii> ans;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            ll cnt = 0;
            while (x % i == 0) {
                cnt++;
                x /= i;
            }
            ans.push_back({i, cnt});
        }
    }
    if (x > 1) ans.push_back({x, 1});
    return ans;
}
