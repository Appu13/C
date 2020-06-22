#include <iostream>

int sum_of_two_digits(int first_digit, int second_digit)
{
    //Returning output
    return first_digit + second_digit;
}

int main() {
    int a = 0;
    int b = 0;

    //Receiving the input
    std::cin >> a;
    std::cin >> b;

    //Displaying output
    std::cout << sum_of_two_digits(a, b);
    return 0;
}//By appu13
