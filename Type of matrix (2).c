/* program to identify the type of matrix*/
#include<stdio.h>
void main()
{
    int a[5][5],r,c,i,j;
    printf("enter the no of rows and colomns for the matrix");
    scanf("%d %d",&r,&c);
    printf("enter the elemnets of matrix");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    
    /* square matrix */
    if(r==c)
    {
        printf("matrix is sqaure matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    else if(r=1&&c!=1)
    {
        printf("row matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    else if(c=1&&r!=1)
    {
        printf("coloumn matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    else if(r!=1&&c!=1)
    {
        printf("rectangular matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    if(a[i][j]==1)
    {
        printf("identity matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    else if(a[i][j]==0)
    {
        printf("null matrix");
        printf("the matrix is ");
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",a[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }
    
}