#include <stdio.h>

int steps(int start, int end) {
    int result = 0, distance = end - start;
    int stepIncrement = 1;

    while (distance > 0) {

        if (distance - stepIncrement >= 0) {
            distance -= stepIncrement;
        } else {
            stepIncrement = distance;
            distance = 0;
        }
        result++;

        if (distance == 0) break;

        if (distance - stepIncrement >= 0) {
            distance -= stepIncrement;
        } else {
            stepIncrement = distance;
            distance = 0;
        }
        result++;

        stepIncrement++;
    }
    return result;
}

int main() {
    int startValue, endValue;

    printf("Enter the starting value: ");
    scanf("%d", &startValue);

    printf("Enter the ending value: ");
    scanf("%d", &endValue);

    if (endValue < startValue || startValue < 0 || endValue < 0) {
        printf("Input error");
        return 47;
    }

    int result = steps(startValue, endValue);
    printf("Start: %d End: %d Result: %d", startValue, endValue, result);

    return 0;
}

