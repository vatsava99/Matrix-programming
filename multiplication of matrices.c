/* c program for multiplication of 2 matrices*/
#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],c[5][5];
    int i,j,k,r1,c1,r2,c2,sum=0;
    printf("enter the no of rows and colomuns for matrix a");
    scanf("%d %d",&r1,&c1);
    printf("enter the no of rows and colomuns for matrix b");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("not possible");
    }
    else
    {
        printf("enter the first matrix a");
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
        printf("enter the second matrix b");
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
        i=0;
        while(i<r1)
        {
            j=0;
            while(j<c2)
            {
                c[i][j]=0;
                i=0;
                while(i<r1)
                {
                    j=0;
                    while(j<c2)
                    {
                        sum=0;
                        k=0;
                        while(k<c1)
                        {
                            sum=sum+a[i][k]*b[k][j];
                            k++;
                        }
                        c[i][j]=sum;
                        j++;
                    }
                    
                        
                    i++;
                }
                j++;
                
            }
            i++;
            
        }
        printf("multiplication of 2 matrices");
        for(i=0;i<r1;i++)
        {
            printf("\n");
            for(j=0;j<c2;j++)
            {
                printf("%d",c[i][j]);
            }
            
            
        }
            
        
            
        
    }
}