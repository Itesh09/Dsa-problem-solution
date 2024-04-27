#include <stdio.h>
int main()
{
 int i,j;
 int num_lines;
 printf("enter the number of lines you want  to print");
 scanf("%d",&num_lines);
 for(i=1;i<=num_lines;i++)
 {
        for(j=1;j<=num_lines;j++)
        {
            printf("%c \t",j+64);
        }  
        printf("\n");

 }



    return 0;
}