#include <stdio.h>
#include <string.h> // cuz fcking errors with strcmp

int main() {
    int num1, num2;
    char operator[2]; // Using these operators: - +
    int result;
    char MadeBy[] = "Made by github.com/r0ck450\n";
    char Warning[] = "Warning: An example with the result [0] will not give you any output!!\n";
    printf("%s", MadeBy);
    printf("%s", Warning);
    printf("Type Number like number +/- number = ");
    scanf("%d %s %d", &num1, operator, &num2);

    if (strcmp(operator, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(operator, "-") == 0) {
        result = num1 - num2;
    } else {
        printf("Invalid Math Operator \n");
        return 1;
    }

    printf("Result = %d\n", result);

    return 0;
}
