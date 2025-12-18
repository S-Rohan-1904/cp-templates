/**
 * Segmented Sieve (Primes in range [L, R])
 * Time Complexity: O((R - L + 1) log log R + sqrt(R) log log sqrt(R))
 * Space Complexity: O(R - L + 1 + sqrt(R))
 * Usage: Returns a vector<long long> containing all primes in range [L, R].
 * Note: Requires the standard sieve() function to find base primes up to sqrt(R).
 * Constraint: R - L + 1 should be within ~10^7 for memory limits.
 */

vector<long long> segmented_sieve(long long L, long long R) {
    // 1. Precompute primes up to sqrt(R) using standard sieve
    long long limit = sqrt(R);
    vector<int> base_primes = sieve(limit);

    // 2. Boolean array for the range [L, R], shifted to 0-indexing
    vector<bool> is_p(R - L + 1, true);
    if (L == 1) is_p[0] = false;

    // 3. Use base primes to mark multiples in the range
    for (int prime : base_primes) {
        long long first_mul = (L + prime - 1) / prime * prime;
        // Start from max(prime*prime, first_mul) to avoid marking the prime itself
        long long cur_mul = max(1LL * prime * prime, first_mul);

        while (cur_mul <= R) {
            is_p[cur_mul - L] = false;
            cur_mul += prime;
        }
    }

    // 4. Collect all primes in the range
    vector<long long> primes_l_to_r;
    for (int i = 0; i < R - L + 1; i++) {
        if (is_p[i]) {
            primes_l_to_r.push_back(i + L);
        }
    }

    return primes_l_to_r;
}
