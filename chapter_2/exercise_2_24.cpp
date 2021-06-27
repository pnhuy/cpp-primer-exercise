/*
Why is the initialization of p legal but that of lp illegal?
*/

int main() {
    int i = 42;
    void *p = &i;
    long *lp = &i; // error: invalid conversion from ‘int*’ to ‘long int*’
}