int main() {
    // int i = -1, &r = 0; //error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    // int i2 = 0, *const p2 = &i2;
    // const int i = -1, &r = 0;
    // int i2 = 0; const int *const p3 = &i2;
    // const int *p1 = &i2;
    //const int &const r2; // error: ‘r2’ declared as reference but not initialized
    int i = -1; const int i2 = i, &r = i;
}