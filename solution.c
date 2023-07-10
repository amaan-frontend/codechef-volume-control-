#include <stdio.h>
#include <stdlib.h>

int min_button_presses(int X, int Y) {
    return abs(X - Y);
}

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read X and Y for each test case
        int result = min_button_presses(X, Y);
        printf("%d\n", result);
    }

    return 0;
}
