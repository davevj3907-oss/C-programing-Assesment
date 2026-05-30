#include <stdio.h>

int main() {
    float screenTime[7];
    float total = 0, average;
    int i;

    for(i = 0; i < 7; i++) {
        printf("Enter screen time for Day %d (hours): ", i + 1);
        scanf("%f", &screenTime[i]);
        total += screenTime[i];
    }


    average = total / 7;

    printf("\nTotal Screen Time = %.2f hours\n", total);
    printf("Average Screen Time = %.2f hours/day\n", average);


    if(average > 6) {
        printf("Warning: Average screen time exceeds the healthy limit!\n");
    } else {
        printf("Good job! Your screen time is within the healthy limit.\n");
    }

    return 0;
}
