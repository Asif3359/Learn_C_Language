#include <stdio.h>

int main(int argc, char const *argv[]) {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w == h) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }

    return 0;
}