/**
 * single_ncr (Large N, Small R)
 * Time Complexity: O(R log MOD)
 * Space Complexity: O(log MOD) due to recursion stack
 * Usage: Use when N is very large (up to 10^18) and R is small (up to 10^6).
 * Note: Does not require precomputation.
 */

ll binpow(ll a, ll b) {
    if (b == 0) return 1;
    if (b % 2 == 1)
        return (a * binpow(a, b - 1)) % MOD;
    else {
        ll x = binpow(a, b / 2);
        return (x * x) % MOD;
    }
}

ll inverse(ll x) {
    return binpow(x, MOD - 2);
}

ll single_ncr(ll n, ll r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;
    
    ll num = 1, den = 1;
    for (ll i = 1; i <= r; i++) {
        num = (num * ((n - i + 1) % MOD)) % MOD;
        den = (den * i) % MOD;
    }
    return (num * inverse(den)) % MOD;
}
