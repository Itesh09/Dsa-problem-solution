#include <stdio.h>
int main()
{
 int i,j,num_lines;
 printf("enter how many lines you want to print");
 scanf("%d",&num_lines);
 for(i=num_lines;i>=1;i--)
    {
        for(j=num_lines;j>=1;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }


    return 0;
}