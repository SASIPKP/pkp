#include <stdio.h>
int main()
{
  int i,num,n,large=0;
  printf("how many numbers: ");
  scanf("%d",&n);
  
  for(i=0; i<n; i++)
  {
    printf("\nenter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }
  printf("\n\nthe Largest Number is %d",large);
  
  getch();
  return 0;
}
