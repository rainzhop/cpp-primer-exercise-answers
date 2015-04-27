int main()
{
    int a = 10;
    int &b = a;
    
    // same type
    auto c = a;
    decltype(a) d = a;

    // different types
    auto e = b;
    decltype(b) f = b;

    return 0;
}
