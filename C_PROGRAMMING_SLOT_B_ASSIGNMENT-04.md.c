
#include <stdio.h>

int main() {
    int dollar1, cent1, dollar2, cent2;
    int totalCents, dollars, cents;

    scanf("%d", &dollar1);
    scanf("%d", &cent1);
    scanf("%d", &dollar2);
    scanf("%d", &cent2);

    totalCents = (dollar1 + dollar2) * 100 + cent1 + cent2;

    dollars = totalCents / 100;
    cents = totalCents % 100;

    printf("%d\n", dollars);
    printf("%d\n", cents);

    return 0;
}




