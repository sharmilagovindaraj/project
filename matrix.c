#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int determinant(int f[20][20],int x)
{
  int pr,c[20],d=0,b[20][20],j,p,q,t;
  if(x==2)
  {
    d=0;
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    return(d);
   }
  else
  {
    for(j=1;j<=x;j++)
    {        
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
             }
         }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     c[j]=pr*determinant(b,x-1);
     }
     for(j=1,d=0;j<=x;j++)
     {
       d=d+(f[1][j]*c[j]);
      }
     return(d);
   }
}
int main()
{
printf("\n\n");
printf("\t\t****************************************************************************************\n");
printf("\t\t\t\t\tMATRIX CALCULATOR\n");
printf("\t\t****************************************************************************************\n");
printf("ENTER YOUR CHOICE \n");
printf("\t\t 1  ADDITION\n");
printf("\t\t 2  SUBRACTION\n");
printf("\t\t 3  MULTIPLICATION\n");
printf("\t\t 4  TRANSPOSE\n");
printf("\t\t 5  DETERMINANT\n");
int choice;
scanf("%d",&choice);
switch(choice)
{
 case 1:
 {
  int m,n,a,b,c,d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix 1 in order m*n\n");
   scanf("%d*%d", &m, &n);
   
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
   printf("Enter the number of rows and columns of matrix 2 in order m*n \n");
   scanf("%d*%d", &a, &b);
   
   if(m!=a||n!=b)
   {
    printf("!!!!! the rows and coloums of two matrix must be equal");
    break;
   }
   
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++) 
   {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
   break;
 }
 
 case 2:
 {
   
  int m,n,a,b,c,d, first[10][10], second[10][10], diff[10][10];
 
   printf("Enter the number of rows and columns of matrix 1 in order m*n \n");
   scanf("%d*%d", &m, &n);
   
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
   printf("Enter the number of rows and columns of matrix 2 in order \n");
   scanf("%d*%d", &a, &b);
   
   if(m!=a||n!=b)
   {
    printf("!!!!! the rows and coloums of two matrix must be equal");
    break;
   }
   
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("difference of entered matrices:-\n");
 
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++) 
   {
         diff[c][d] = first[c][d]-second[c][d];
         printf("%d\t", diff[c][d]);
      }
      printf("\n");
   }
   break;
 }
 
 case 3:
 {
  int a[10][10],b[10][10],c[10][10];
  int i,j,k,m,n,p,l;
  printf("enter the order of the first matrix in order m*n \n");
  scanf("%d*%d",&m,&n);
  printf("enter the order of the second matrix int order m*n\n");
  scanf("%d*%d",&p,&l);
  if(n!=p)
  {
   printf("multiplication is not possible");
  }
  else
  {
   printf("enter the elements of first matrix\n");
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
   printf("enter the elements of second matrix\n");
  for(i=0;i<p;i++)
  {
   for(j=0;j<l;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
   }
  }
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    printf("%d\t",c[i][j]);
   }
  printf("\n");
  }
  }
  break;
 }
 
 case 4:
 {
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);
 
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
   for(d = 0; d < n; d++)
    scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
   for( d = 0 ; d < n ; d++ )
    transpose[d][c] = matrix[c][d];
 
    printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) 
  {
   for (d = 0; d < m; d++)
   {
    printf("%d\t", transpose[c][d]);
   }
    printf("\n");
  }
  break;
 }
 
 case 5:
 {
  int a[20][20],m;
  int i,j;
  printf("\n\nEnter order of matrix : ");
  scanf("%d",&m);
  printf("\nEnter the elements of matrix\n");
  for(i=1;i<=m;i++)
  {
   for(j=1;j<=m;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
 
  printf("\n");
  printf("\n Determinant of Matrix A is %d .",determinant(a,m));
  
  break;
 }
 default:
 {
  printf(" YOU HAVE PRESSED THE WRONG KEY");
 }
 
 }
 
 printf("\n\n");
 printf("\t\t*****THANKYOU FOR USING OUR CALCULATOR*****");
}
 








