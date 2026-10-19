
#include <stdio.h>

int main() {
    int coins, x, y;
    int longBen, blackbeard, remaining, pirateShare;

    scanf("%d", &coins);
    scanf("%d", &x);
    scanf("%d", &y);

    longBen = coins * x / 100;
    remaining = coins - longBen;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirateShare = remaining / 3;

    printf("%d\n", longBen);
    printf("%d\n", blackbeard);
    printf("%d\n", pirateShare);

    return 0;
}


