bool isPowerOfThree(int n) {
    if (n <= 0 || n % 3 != 0) {
        return false;
    } else {
        return true;
    }

    return isPowerOfThree(n/3);
}