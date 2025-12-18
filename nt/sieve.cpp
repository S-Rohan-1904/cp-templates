/**
 * Sieve of Eratosthenes
 * Time Complexity: O(N log log N)
 * Space Complexity: O(N)
 * Usage: Returns a vector<int> containing all prime numbers up to n.
 * Note: Efficient for n up to 10^7. For larger ranges, use segmented sieve.
 */

vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    return primes;
}
