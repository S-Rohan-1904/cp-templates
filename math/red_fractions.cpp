/**
 * For comparing fractions
 */

pll get_red_fraction(ll a, ll b) {
  if(a == 0 && b == 0) return mp(0LL,0LL);
  else if(a == 0) return mp(0LL,1LL);
  else if(b == 0) return mp(1LL,0LL);
  int neg = 1;
  if(a<0) {neg*=-1; a*=-1;}
  if(b<0) {neg*=-1; b*=-1;}
  ll g = __gcd(a,b);
  return mp(neg*a/g,b/g);
}