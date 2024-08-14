#include <stdio.h>

 main() {
    int r, c, i, j, row, column;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];
    int rowsum = 0, columnsum = 0;
    printf("Enter Array Elements = \n ");

    for(i=0; i<r; i++) 
	{
        for(j=0; j<c; j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
   for(i=0; i<r; i++) 
	{
        for(j=0; j<c; j++)
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter row number 0 to %d =",r-1);
    scanf("%d",&row);
    printf("\nElements of Row %d = ",row);
	for(j=0;j<c;j++)
	{
		printf("%d ",a[row][j]);
		rowsum = rowsum + a[row][j];	
	}
	printf("The Sum of Row %d = %d\n",row,rowsum);
	printf("Enter Column number 0 to %d = ",c-1);
	scanf("%d",&column);
	printf("\nElements of column %d = ",column);
	for(i=0;i<r;i++)
	{
		printf("%d ",a[i][column]);
		columnsum = columnsum + a[i][column];
	}
	printf("\nThe sum of column %d = %d",column,columnsum); 


}
