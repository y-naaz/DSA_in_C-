#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "The 0th Fibonacci number is: 0" << std::endl;
        return 0;
    }

    int first = 1, second = 1, next, i = 2;

    while (i < n) {
        next = first + second;
        first = second;
        second = next;
        i++;
    }

    std::cout << "The " << n << "th Fibonacci number is: " << second << std::endl;

    return 0;
}
