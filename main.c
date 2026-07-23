#include <stdio.h>
#include <stdlib.h>


int multiFunction(int m1, int m2);
float divFunction(float d1, float d2);
int subFunction(int s1, int s2);
int addFunction(int a1, int a2);

int main()
{
    char option = '\0';

    printf("Please enter an option -> m/d/s/a: ");
    scanf(" %c", &option);

    switch (option)
    {
        case 'm':

            int m1;
            int m2;

            printf("The total is %d\n", multiFunction(m1,m2));
            break;


        case 'd':

            float d1;
            float d2;

            printf("The total is %.2f\n", divFunction(d1,d2));
            break;

        case 's':

            int s1;
            int s2;

            printf("The total is %d\n", subFunction(s1, s2));
            break;

        case 'a':

            int a1;
            int a2;

            printf("The total is %d\n", addFunction(a1, a2));
            break;


        default:

            printf("Option %c is not available!\n", option);
            break;

    }


    return 0;
}

int multiFunction(int m1, int m2)
{
    printf("Enter first number: ");
    scanf("%d", &m1);

    printf("Enter the second number: ");
    scanf("%d", &m2);

    return m1 * m2;
}

float divFunction(float d1, float d2)
{
    printf("Enter first number: ");
    scanf("%f", &d1);

    printf("Enter second number: ");
    scanf("%f", &d2);

    return d1 / d2;

}

int subFunction(int s1, int s2)
{
    printf("Enter first number: ");
    scanf("%d", &s1);

    printf("Enter second number: ");
    scanf("%d", &s2);

    return s1 - s2;
}

int addFunction(int a1, int a2)
{
    printf("Enter first number: ");
    scanf("%d", &a1);

    printf("Enter second number: ");
    scanf("%d", &a2);

    return a1 + a2;
}