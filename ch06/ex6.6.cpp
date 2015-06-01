int func(int n)
{
    int ival;
    static int sival = 0;
    ++sival;

    return ival + n;
}
