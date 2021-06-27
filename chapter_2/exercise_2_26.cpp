int main() {
    const int buf; // error: uninitialized const ‘buf’
    int cnt = 0;
    const int sz = cnt;
    ++cnt; 
    ++sz; // error: increment of read-only variable ‘sz’
}