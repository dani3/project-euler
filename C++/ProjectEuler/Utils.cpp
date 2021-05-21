#include "Utils.h"
#include <math.h>

int Utils::sum_of_digits(int number) {
    int c = 0;
    while (number > 0) {
        c += number % 10;
        number /= 10;
    }

    return c;
}
