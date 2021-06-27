int main() {
    int i = 0, *const cp = &i;
    int *p1 = &i, *const p2 = &i;
    const int ic = 1, &r = ic;
    const int *const p3 = &i;
    const int *p = &i;
    
    i = ic; // ok
    p1 = p3; // error: invalid conversion from ‘const int*’ to ‘int*’
    p1 = &ic; // error: invalid conversion from ‘const int*’ to ‘int*’
    p3 = &ic; // error: assignment of read-only variable
    p2 = p1; // error: assignment of read-only variable
    ic = *p3; // error: assignment of read-only variable
}