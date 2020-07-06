/****************************************************************************/
/*addition and subtraction of two matrices*/

#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,i,j;
    int a[5][5],b[5][5],c[5][5],d[5][5];
    printf("enter number of rows and colomns of matrix a");
    scanf("%d %d",&r1,&c1);
    printf("enter number of rows and colomns of matrix b");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2||c1!=c2)
    {
        printf("not possible");
        
    }
    else
    {
        /* taking elements for matrix a*/
    printf("enter %d elements of matrix a",r1*c1);
    i=0;
    while(i<r1)
    {
        j=0;
        while(j<c1)
        {
            scanf("%d",&a[i][j]);
            j++;
        }
        i++;
    }
    /*elements for matrix b*/
    printf("enter %d elements of matrix b",r2*c2);
    i=0;
    while(i<r2)
    {
        j=0;
        while(j<c2)
        {
            scanf("%d",&b[i][j]);
            j++;
        }
        i++;
    }
    /*addition of two matrices c=a+b*/
    i=0;
    while(i<r1)
    {
        j=0;
        while(j<c1)
        {
            c[i][j]=a[i][j]+b[i][j];
            j++;
        }
        i++;
    }
    /*sub of 2 matrices d=a-b*/
    i=0;
    while(i<r1)
    {
        j=0;
        while(j<c1)
        {
            d[i][j]=a[i][j]-b[i][j];
            j++;
        }
        i++;
    }
    /*output of addition*/
    printf("matrix c");
    i=0;
    while(i<r2)
    {
        j=0;
        while(j<c2)
        {
            printf("%3d",c[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    /*output of subtraction*/
    printf("matrix d");
    i=0;
    while(i<r2)
    {
        j=0;
        while(j<c2)
        {
            printf("%3d",d[i][j]);
            j++;
        }
        i++;
        printf("\n");
    }
    }   
    
        
    
        
    
        
    
    
}