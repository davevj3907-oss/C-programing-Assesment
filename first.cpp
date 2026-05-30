 #include <stdio.h>

int main() {
    int choice, count;
    float hours, total, avg;
    FILE *fp;

    do {
        printf("\n--- Student Productivity Tracker ---\n");
        printf("1. Log Study Hours\n");
        printf("2. Generate Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            fp = fopen("study.txt", "a");

            if(fp == NULL) {
                printf("Error opening file!\n");
                break;
            }

            printf("Enter Study Hours: ");
            scanf("%f", &hours);

            fprintf(fp, "%.2f\n", hours);
            fclose(fp);

            printf("Data Saved Successfully!\n");
            break;

        case 2:
            fp = fopen("study.txt", "r");

            if(fp == NULL) {
                printf("No Data Found!\n");
                break;
            }

            total = 0;
            count = 0;

            while(fscanf(fp, "%f", &hours) != EOF) {
                total += hours;
                count++;
            }

            fclose(fp);

            printf("\nTotal Study Hours = %.2f\n", total);

            if(count > 0) {
                avg = total / count;
                printf("Average Study Hours = %.2f\n", avg);
            } else {
                printf("No study records available.\n");
            }

            break;

        case 3:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
