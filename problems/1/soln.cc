
/*
  Problem 1: Multiples of 3 and 5

  If we list all the natural numbers below 10 that are multiples of 3
  or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

  Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main() {
    constexpr unsigned int limit = 1000;

    int sum = 0;

    for (int mult3 = 3; mult3 < limit; mult3 += 3)
        if (mult3 % 5 != 0)
            sum += mult3;

    for (int mult5 = 5; mult5 < limit; mult5 += 5)
        sum += mult5;

    std::cout << sum << std::endl;
}
