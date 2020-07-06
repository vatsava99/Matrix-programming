/** transpose of a matrix*/
#include<stdio.h>
void main()
{
    
       int a[5][5],b[5][5],r,c,i,j;
       printf("enter the row and colomuns for matrix");
       scanf("%d %d",&r,&c);
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
           printf("the matrix is");
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
                   b[i][j]=a[i][j];
                   printf("%d",b[i][j]);
                   j++;
               }
               i++;
           }
           printf("tranpose of matrix");
           i=0;
           while(i<r)
           {
               j=0;
               while(j<c)
               {
                   printf("%d",b[i][j]);
                   j++;
               }
               i++;
               printf("\n");
           }
}