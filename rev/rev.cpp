void c() {
    int c = 10;
    int m = 20; 
}
int main() {
    int a = 5;  // step into --> line by line 
    int b = 3;
    c(); // step over -- >execute the function without going inside it line by line 
    int sum = a + b;
    return 0;
}
