int main()
{
    int val = 100;
    int *p = nullptr;

    p = &val; // change value of a pointer
    *p = 10; // change the value to which the pointer points

    return 0;
}
