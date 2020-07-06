/*determinant of matrix 3*3 and 2*2 */
#include<stdio.h>
void main()
{
    int a[5][5],i,j,r,c,det;
    printf("enter a 2*2 or 3*3 matrix");
    printf("enter no of rows");
    scanf("%d",&r);
    printf("enter no of colomns");
    scanf("%d",&c);
    printf("enter %d elements of matrix",r*c);
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
    if(r*c==4)
    {
        det=a[1][1]*a[2][2]-a[1][2]*a[2][1];
    }
    else if(r*c==9)
    {
        det=a[1][1](a[2][2]*a[3][3]-a[2][3]*a[3][2])-a[1][2](a[2][1]*a[3][3]-a[2][3]*a[3][1])+a[1][3](a[2][1]*a[3][2]-a[3][1]*a[2][2]);
    }
    printf("%d",det);
}