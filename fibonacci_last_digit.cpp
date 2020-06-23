#include <iostream>

//Naive apporach
int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

//Fast apporach
int get_fibonacci_last_digit_fast(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    return current;
}



int main() {
    int n;

    //Input the n value
    std::cin >> n;

    //Displaying the value
    std::cout << get_fibonacci_last_digit_fast(n) << '\n';

}//By appu13



