#include<assert.h>
#include "head.h"

int main()
{
    //test for add 2 numbers

    assert(add(10,20) == 30);
    assert(add(5,10) == add(12,3));
    assert(add(-5, -6) == -11);

    //test for Subtracting two unsigned numbers
    assert(sub(20,10) == 10);
    assert(sub(10,10) == 0);
    assert(sub(5,10) == -5);
    assert(sub(-20,10) == -30);

    //check whether input is even
    assert(is_even(10) == 1);
    assert(is_even(7) == 0);
    assert(is_even(46) == 1);
    assert(is_even(17) == 0);

    assert(circle_area(10) == 314);
    assert(charactre_dif('a','e') == 3);
    assert(F(0) == 32);

    assert(is_integer(9) == 1);
    assert(is_integer('A') == 0);

    assert(leap_year(2024) == 1);
    assert(leap_year(2025) == 0);

    assert(power(3) == 8);

    assert(sum_of_digits(12345) == 15);

    assert(reversee(123) == 321);

    return 0;
}
