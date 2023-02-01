#include <stdio.h>
int main(){
    int num1, num2;
    float sum, sub, multiply, division;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub= num1 - num2;
    
    multiply = num1 * num2;
    
    division = num1 / num2;
        
    printf("Addition of %d and %d is: %.2f\n", num1, num2, sum);
    printf("Subtraction of %d and %d is: %.2f\n", num1, num2, sub);
    printf("Multiplication of %d and %d is: %.2f\n", num1, num2, multiply);
    printf("Division of %d and %d is: %.2f\n", num1, num2, division);
    
    return 0;
}
