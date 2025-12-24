/**
 * For comparing fractions
 */

pll get_red_fraction(ll a, ll b) {
  if( a==0 && b==0) return mp(0,0);
  else if(a==0) return mp(0,1);
  else if(b==0) return mp(1,0);
  ll g = __gcd(a,b);
  return mp(a/g,b/g);
}