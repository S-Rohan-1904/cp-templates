/**
 * Trial Division Primality Test
 * Time Complexity: O(sqrt N)
 * Space Complexity: O(1)
 * Usage: Returns true if x is prime, false otherwise.
 * Note: Efficient for single queries where x <= 10^14.
 */

bool is_prime(ll x) {
    if (x < 2) return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
