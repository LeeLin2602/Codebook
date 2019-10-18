// Queries a ^ p.
ll fastpow(ll a, int p) {
    ll ret = 1;
    while (p) {
        if (p & 1) ret *= a;
        a *= a, p >>= 1;
    }
    return ret;
}

// Queries (a ^ p) mod m.
ll fastpow(ll a, ll p, ll m) {
    ll ret = 1;
    while (p) {
        if (p & 1) ret = ret * a % m;
        a = a * a % m, p >>= 1;
    }
    return ret;
}
