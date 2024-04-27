#include <stdio.h>
int main()
{
 int i,j,num_lines;
 printf("enter how many lines you want to print");
 scanf("%d",&num_lines);
 for(i=1;i<=num_lines;i++)
    {
        for(j=num_lines;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }


    return 0;
}