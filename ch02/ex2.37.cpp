int main()
{
    int a = 3, b = 4;

    decltype(a) c = a; // c: int
    decltype(a = b) d = a; // d: int &

    // a:3, b:4, c:3, d:3

    return 0;
}
