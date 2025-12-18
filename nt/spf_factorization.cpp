/**
 * Fast Prime Factorization (SPF Sieve)
 * Time Complexity: 
 * - Precompute: O(N log log N) 
 * - Query: O(log X)
 * Space Complexity: O(N) for spf array
 * Usage: 
 * 1. Set N to the maximum possible value of X.
 * 2. Call sieve() once in main().
 * 3. Call prime_factors_2(x) for queries.
 * Note: Essential for problems with many queries on numbers up to 10^6 or 10^7.
 */

const int N = 1000100;
int spf[N];

void sieve() {
    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void prime_factors_2(int x) {
    while (x != 1) {
        int i = spf[x];
        int ipow = 0;
        while (x % i == 0) {
            ipow++;
            x /= i;
        }
        cout << i << " " << ipow << endl;
    }
}
