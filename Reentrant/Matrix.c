#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][3],i,j;
    printf("\nENTER VALUES FOR THE MATRIX:\n");

    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    
    printf("\nTHE VALUES OF THE MATRIX ARE:\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    
    getch();
}