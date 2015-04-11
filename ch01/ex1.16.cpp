#include <iostream>

int main()
{
    int sum = 0;
    int val = 0;
    int keep_input = 1;

    while (keep_input == 1)
    {
        std::cout << "Enter one integer: " << std::endl;
        std::cin >> val;
        sum += val;

        std::cout << "Keep input another integer? (1 to keep input, else to stop)" << std::endl;
        std::cin >> keep_input;
    }

    std::cout << "Sum is " << sum << "." << std::endl;

    return 0;
}
