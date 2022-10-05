#include<stdio.h>
#include<stdlib.h>

float ADD(float a, float b)
{
    return a+b;
}
 
float DIFF(float a, float b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}

float MUL(float a, float b)
{
    return a*b;
}

void DIV(float a, float b)
{
    float res;
    res=a/b;
    if(a>=b)
    {
        printf("\nThe result is : %.2f", res);
    }
    else
    {
        printf("\nFractional Result is: %.0f/%.0f", a, b);
        printf("\nDecimal Result is : %.2f", res);
    }
}

int main()
{
    int choice, t;
    float a, b, res;
    while(1)
    {
        printf("\nEnter the first number : ");
        scanf("%f", &a);
        printf("\nEnter the second number : ");
        scanf("%f", &b);
        t=1;
        while(t==1)
        {
            printf("\nSelect the operation:\n");
            printf("1. Addition\n");
            printf("2. Difference\n");
            printf("3. Multiply\n");
            printf("4. Divide\n");
            printf("5. Change Inputs\n");
            printf("6. Exit\n");
            printf("Enter your choice : ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    res=ADD(a, b);
                    printf("\nThe result of addition is : %.2f", res);
                    break;
                case 2:
                    res=DIFF(a, b);
                    printf("\nThe result of difference is : %.2f", res);
                    break;
                case 3:
                    res=MUL(a, b);
                    printf("\nThe result of multiplication is : %.2f", res);
                    break;
                case 4:
                    DIV(a, b);
                    break;
                case 5:
                    t=0;
                    break;
                case 6:
                    exit(0);            
                default:
                    printf("\nWrong Choice! try Again\n");
                    break;
            }
        }
    }
    return 0;
}