#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);

    // We map ranges to cases:
    // case 0: money < 5000
    // case 1: 5000 <= money < 10000
    // case 2: 10000 <= money < 20000
    // case 3: money >= 20000
    int range = (money >= 20000) ? 3 : 
                (money >= 10000) ? 2 : 
                (money >= 5000)  ? 1 : 0;

    switch (range) {
        case 0:
            printf("Something\n");
            break;
        case 1:
            printf("Levis Bag\n");
            break;
        case 2:
            printf("Gucci Bag\n");
            break;
        case 3:
            printf("Gucci Bag\n");
            if (money > 20000) {
                printf("Gucci Belt\n");
            }
            break;
    }

    return 0;
}