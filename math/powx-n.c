double myPow(double x, int n) {
    long long n1 = n;

    if (n1 == 0) return 1;
    if (n1 < 0) return 1/myPow(x,-n1);

    return x * myPow(x, n1-1);
}