void arrayFill(int *p, int n, int v) {
    for (int i = 0; i < n; ++i) 
        *(p + i) = v;
}
void arrayReverse(int*p, int n) {
    for(int i = 0; i < (n/2); ++i) {
        int hold = *(p+i);
        *(p+i) = *(p+n-i-1);
        *(p+n-1-i) = hold;
    }
}

void arrayCopy(int *p, int n, int *q) {
    for (int i = 0; i < n; ++i) 
        *(p + i) = *(q + i);
}

bool arrayEqual(int *p, int n, int *q) {
    for (int i = 0; i < n; ++i)
        if (*p != *q)
            return false;
    return true;
}