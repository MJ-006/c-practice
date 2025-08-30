#include<stdio.h>
int main()
{
    int a,b,choice;
    float div;
    printf("   MENU   \n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
            printf("a+b=%d\n",a+b);
            break;
        case 2:
            printf("a-b=%d\n",a-b);
            break;
        case 3:
            printf("a*b=%d\n",a*b);
            break;
        case 4:
            div=a/b;
            printf("a/b=%.2f\n",div);
            break;
        default:
            printf("Try again!\n");
            break;
    }
    return 0;
}

