// Prefix: u-binpow | Time: O(log B) | Space: O(1)
/**
 * Binary Exponentiation (Standard)
 * Computes a^b in logarithmic time.
 * Note: Use this for non-modular arithmetic where values fit in long long.
 */
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
