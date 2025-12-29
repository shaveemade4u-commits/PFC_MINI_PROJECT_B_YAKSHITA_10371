// Name: B Yakshita
// ERP ID: 10371
// Project title: Bitwise Utility Tool
// Topic name: Bitwise ops
#include <stdio.h>

int main() {
    int a, b, choice;

    do {
        printf("\n--- Bitwise Utility Tool ---\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a & b);
                break;

            case 2:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a | b);
                break;

            case 3:
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a ^ b);
                break;

            case 4:
                printf("Enter number and shift value: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a << b);
                break;

            case 5:
                printf("Enter number and shift value: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a >> b);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
/*
Output
--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 1
Enter two integers: 3 5
Result: 1

--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 2
Enter two integers: 2 5
Result: 7

--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 3
Enter two integers: 8 6
Result: 14

--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 4
Enter number and shift value: 4 5
Result: 128

--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 5
Enter number and shift value: 3 5
Result: 0

--- Bitwise Utility Tool ---
1. AND (&)
2. OR (|)
3. XOR (^)
4. Left Shift (<<)
5. Right Shift (>>)
6. Exit
Enter your choice: 6
Exiting program...
*/
