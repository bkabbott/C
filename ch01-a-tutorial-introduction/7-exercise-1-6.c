//
// Created by brian on 6/19/26.
//

/* Exericse 1-6. Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main(void) {
    int c;

    if (c = (getchar() != EOF) == 1 || (c = getchar() != EOF) == 0) {
        printf("It's 1 or 0\n");
    } else {
        printf("It's not 1 or 0");
    }
}
