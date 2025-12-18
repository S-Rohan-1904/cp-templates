/**
 * Precompute Derangements (!n)
 * Time Complexity: O(N)
 * Space Complexity: O(N) for the global array
 * Usage: 
 * 1. Call compute_derangements(N) once in main()
 * 2. Access values using der[i]
 * Note: !n is the number of permutations where no element appears in its original place.
 */

ll der[1000001];

void compute_derangements(int N, int mod = MOD) {
    if (N >= 1) der[1] = 0; // !1 = 0
    if (N >= 2) der[2] = 1; // !2 = 1
    for (int i = 3; i <= N; i++) {
        der[i] = (1LL * (i - 1) * (der[i - 1] + der[i - 2])) % mod;
    }
}
