#include <stdio.h>

int main() {
    FILE *fp;
    char goal[100];

    // Read existing goals
    fp = fopen("goals.txt", "r");

    if(fp != NULL) {
        printf("Previous Goals:\n");
        while(fgets(goal, sizeof(goal), fp) != NULL) {
            printf("%s", goal);
        }
        fclose(fp);
    } else {
        printf("No previous goals found.\n");
    }

    // Add a new goal
    fp = fopen("goals.txt", "a");

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nEnter today's goal: ");
    getchar();  // Clear input buffer
    fgets(goal, sizeof(goal), stdin);

    fputs(goal, fp);

    fclose(fp);

    printf("Goal saved successfully!\n");

    return 0;
}
