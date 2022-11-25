#include <stdio.h>

int addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

int main()
{
    int number1, number2, result;
    printf("Enter two number: ");
    scanf("%d %d", &number1, &number2);
    result = addition(number1, number2);
    printf("%d + %d = %d\n", number1, number2, result);
    return 0;
}