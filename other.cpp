void arrayReverse(int *p, int n) {
    for(int i = 0; i < (n/2); i++) {
        int hold = *(p+i);
        *(p+i) = *(p+n-i)
        *(p+n-i) = hold;
    }
}