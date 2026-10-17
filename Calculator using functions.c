#include<stdio.h>
#include<math.h>
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

int main() {
    int a, b;
    char c;
    printf("Enter the number a ::\n");
    scanf("%d", &a);

    printf("Enter the number b ::\n");
    scanf("%d", &b);

    printf("Enter\n + for sum \n - for subtraction\n * for multiplication\n / for division\n ^ for exponential\n v for root\n");

    scanf(" %c", &c);

    if(c == '+')
        printf("Result: %d\n", sum(a, b));
    else if(c == '-')
        printf("Result: %d\n", sub(a, b));
    else if(c == '*')
        printf("Result: %d\n", mul(a, b));
    else if(c == '/')
        printf("Result: %f\n", div(a, b));
    else if(c == '^')
        printf("Result: %f\n", pow(a, b));
    else if(c == 'v')
        printf("Square root of a: %f, Square root of b: %f\n", sqrt(a), sqrt(b));
    else
        printf("Invalid Input!\n");

    return 0;
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(int a, int b) { return (float)a / b; }
