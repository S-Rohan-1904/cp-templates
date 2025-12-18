// Prefix: m-int | Time: O(log MOD)
struct mint {
    static int mod;
    int x;
    mint(ll _x = 0) { _x %= mod; if (_x < 0) _x += mod; x = (int)_x; }
    mint& operator+=(const mint &a) { if ((x += a.x) >= mod) x -= mod; return *this; }
    mint& operator-=(const mint &a) { if ((x += mod - a.x) >= mod) x -= mod; return *this; }
    mint& operator*=(const mint &a) { x = (int)((ll)x * a.x % mod); return *this; }
    mint pow(ll t) const {
        mint res = 1, cur = *this;
        while (t) { if (t & 1) res *= cur; cur *= cur; t >>= 1; }
        return res;
    }
    mint inv() const { return pow(mod - 2); }
    mint& operator/=(const mint &a) { return *this *= a.inv(); }
    friend mint operator+(mint a, const mint &b) { return a += b; }
    friend mint operator-(mint a, const mint &b) { return a -= b; }
    friend mint operator*(mint a, const mint &b) { return a *= b; }
    friend mint operator/(mint a, const mint &b) { return a /= b; }
    friend ostream& operator<<(ostream &os, const mint &m) { return os << m.x; }
    friend istream& operator>>(istream &is, mint &m) { ll t; is >> t; m = mint(t); return is; }
};
int mint::mod = 1e9 + 7;
