int main() {
    int i = 0, *const cp = &i;
    int *p1 = &i, *const p2 = &i;
    const int ic = 1, &r = ic;
    const int *const p3 = &i;
    const int *p = &i;
}