/**
 * nCr with Precomputation
 * Time Complexity: O(MAXN) precomputation, O(1) per query
 * Space Complexity: O(MAXN) for factorial arrays
 * Usage: 
 * 1. Call precompute() once in main()
 * 2. Use ncr(n, r) for queries
 * Note: Works for MOD prime (Fermat's Little Theorem)
 */

const int MAXN = 1000001;
ll fact[MAXN], invfact[MAXN];

ll binpow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll inverse(ll n) {
    return binpow(n, MOD - 2);
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invfact[MAXN - 1] = inverse(fact[MAXN - 1]);
    for (int i = MAXN - 2; i >= 0; i--) {
        invfact[i] = (invfact[i + 1] * (i + 1)) % MOD;
    }
}

ll ncr(int n, int r) {
    if (r < 0 || r > n) return 0;
    ll num = fact[n];
    ll den = (invfact[n - r] * invfact[r]) % MOD;
    return (num * den) % MOD;
}
