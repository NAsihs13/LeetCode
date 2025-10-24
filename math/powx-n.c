double myPow(double x, int n) {
    long long exp = n;

    if (exp == 0) return 1;

    if (exp < 0) {
        x = 1/x;
        exp = -exp;
    }

    return x * myPow(x, exp-1);
}