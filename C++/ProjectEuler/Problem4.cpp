#include "Problem4.h"

static int is_palindrome(int number) {
    int an[6];

    int pos = 0;
    while (number > 0) {
        an[pos++] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < pos; ++i) {
        if (an[i] != an[pos - i - 1]) {
            return false;
        }
    }

    return true;
}

int Problem4::run(void) {
    for (int i = 999; i >= 1; --i) {
        for (int j = 999; j >= 1; --j) {
            if (is_palindrome(i * j)) {
                return i * j;
            }
        }
    }

    return 0;
}
