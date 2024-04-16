#include <stdio.h>
int main()
{
int num_line,i,k;
printf("enter the number of rows you want to print");
scanf("%d",&num_line);
for(i=1;i<=num_line;i++)
 {
    for(k=1;k<=num_line;k++)
     {
      printf("%d",k);
      
     }
     printf("\n");
 }
 
return 0;
}