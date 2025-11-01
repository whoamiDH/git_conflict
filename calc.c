#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int x, y, choice;
    printf("=== Simple Calculator ===\n");
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    prinf("hello dodo");
    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Result: %d\n", add(x, y)); break;
        case 2: printf("Result: %d\n", sub(x, y)); break;
        case 3: printf("Result: %d\n", mul(x, y)); break;
        case 4: printf("Result: %d\n", divi(x, y)); break;
        default: printf("Invalid choice.\n");
    }

    return 0;
}
