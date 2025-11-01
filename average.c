#include <stdio.h>
//feature/mission1 1st commits~
int main() {
    int n;
    double sum = 0, num;

    printf("Enter number of values: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");
    if (!file) {
        printf("File error!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &num);
        fprintf(file, "%.2f\n", num);
        sum += num;
    }

    fclose(file);
    printf("Average = %.2f\n", sum / n);
    return 0;
}
