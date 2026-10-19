
#include <stdio.h>

int main() {
    float mileage;
    int petrol, distance;
    float maxDistance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    maxDistance = mileage * petrol;

    if (maxDistance >= distance) {
        printf("Can reach");
    } else {
        printf("Cannot reach");
    }

    return 0;
}

