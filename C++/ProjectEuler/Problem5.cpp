#include "Problem5.h"

// 2520 is the smallest number that can be divided by each of the
// numbers from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible
// by all of the numbers from 1 to 20?
int Problem5::run(void) {
    int num = 1;
    while (true) {
        bool divisible = true;
        for (int i = 20; i > 1; --i) {
            if ((num % i) != 0) {
                divisible = false;
                break;
            }
        }

        if (divisible) {
            return num;
        }

        num++;
    }
}
