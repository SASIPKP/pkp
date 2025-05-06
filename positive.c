#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    
    /* Input number from user */
    printf("enter any number: ");
    scanf("%d", &num);
    

    if(num > 0)
    {
        printf("number is positive");
    }
    if(num < 0)
    {
        printf("number is negative");
    }
    if(num == 0)
    {
        printf("number is zero");
    }

    return 0;
}
