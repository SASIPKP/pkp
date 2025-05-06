#include <stdio.h>
#include<conio.h>
int main()
{
    int Number;

    printf("enter an integer: ");
    scanf("%d", &Number);

    // True if the number is perfectly divisible by 2
    if(Number % 2 == 0)
        printf("%d is even.", Number);
    else
        printf("%d is odd.", Number);

    return 0;
}
