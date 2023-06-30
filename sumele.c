#include<stdio.h>
int main()
{
     int a[10][10],r,c,sum=0,i,j;
     printf("Enter number of rows and columns ");
     scanf("%d%d",&r,&c);
    
     printf("\nEnter elements for matrix of size %d*%d:\n\n",r,c);
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
          {
               scanf("%d",&a[i][j]);
          }
     printf("\n%d*%d matrix : \n\n",r,c);
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               printf("%2d ",a[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
               sum=sum+a[i][j];
     printf("\nSum of all elements in Matrix = %d",sum);
     return 0;
}
