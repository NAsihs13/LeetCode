double myPow(double x, int n) {
    long long exp = n;

    if (exp == 0) return 1;

    if (exp < 0) {
        x = 1/x;
        exp = -exp;
    }
    if (exp % 2 == 0) {
        double half = myPow(x, exp / 2);
        return half * half;
    } else {
        return x * myPow(x, exp - 1);
    }
}