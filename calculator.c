#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

<<<<<<< HEAD
    printf("Welcome to the Simple Calculator!\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    
=======
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

   
>>>>>>> cf9753807c63d1628dabd21e175ce3d4a8b07e02
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
<<<<<<< HEAD
         }
=======
    
    }
>>>>>>> cf9753807c63d1628dabd21e175ce3d4a8b07e02

    printf("Result: %.2lf\n", result);

    return 0;
}

