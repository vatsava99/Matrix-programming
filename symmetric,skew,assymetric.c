/*program to check whether a matrix is symmetric or skew symmetric or assymetric
aij=aji is symmetric
aij=-aji is skew symmetric
aij!=aji is assymetric 
this property lies only for a sqaure matrix*/
#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],r,c,i,j;
    printf("enter no of rows and columns for given matrix");
    scanf("%d %d",&r,&c);
    /*check whether the matrix is symmetric ,skew symmetric,assymetric*/
    if(r==c)
    {
    printf("enter the elements for the matrix");
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
    
        i=0;
        while(i<r)
        {
            j=0;
            while(j<c)
            {
                b[i][j]=0;
                j++;
            }
            i++;
        }
        i=0;
        while(i<r)
        {
            j=0;
            while(j<c)
            {
                b[i][j]=a[j][i];
                j++;
            }
            i++;
        }
        if(b[i][j]==a[i][j])
        {
            printf("symmetric");
        }
        else if(b[i][j]==-a[i][j])
        {
            printf("skew symmetric");
        }
        else if(b[i][j]!=a[i][j])
        {
            printf("assymetric");
        }
    }
    else
    {
        printf("enter a square matrix");
    }
}