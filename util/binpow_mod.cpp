/**
 * Binary Exponentiation with Modulo
 * Time Complexity: O(log B)
 * Space Complexity: O(1)
 * Usage: Computes (a^b) % mod efficiently.
 */
ll binpow(ll a, ll b, int mod = 1e9 + 7) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
