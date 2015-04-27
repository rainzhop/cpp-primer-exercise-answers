int main()
{
    int a = 3, b = 4;

    decltype(a) c = a; // int
    decltype((b)) d = a; // int &

    ++c;
    ++d;

    // a:4, b:4, c:4, d:4

    return 0;
}
