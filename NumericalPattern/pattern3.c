#include <stdio.h>
int main()
{
 int num_line,rows,columns;
 printf("enter the number of rows you want to print");
 scanf("%d",&num_line);
 for(rows=num_line;rows>=1;rows--)
    {
        for(columns=num_line;columns>=0;columns--)
            {
                printf("%d",rows);
            }
            printf("\n");
    }


    return 0;
}