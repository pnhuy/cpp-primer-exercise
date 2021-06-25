int main() {
    int i = 0;
    double* dp = &i; //error: cannot convert ‘int*’ to ‘double*’ in initialization
    int *ip = i; // error: invalid conversion from ‘int’ to ‘int*’
    int *p = &i;
}