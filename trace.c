#include<stdio.h>
void main()
{
    int a[5][5],r,c,i,j,trace;
    printf("enter no of rows and cpolomns of matrix a");
    scanf("%d %d",&r,&c);
    printf("enter the %d elements of matrix",r*c);
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c);
        {
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    printf("the matrix is");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
        }
        i++;
        printf("\n");
    }
    if(r==c)
    {
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            trace=trace+a[i][j];
        }
    }
    printf("trace is %d",trace);
    }
    else
    printf("trace cannot be obtained");

}