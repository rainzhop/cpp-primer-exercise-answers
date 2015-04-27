int main()
{
    const int i = 42;

    auto j = i; // int
    const auto &k = i; // const int &
    auto *p = &i; // const int *
    const auto j2 = i, &k2 = i; // j2: const int, k2: const int &
    
    return 0;
}
