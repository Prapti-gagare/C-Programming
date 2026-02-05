#include<stdio.h>
int main()
{
    int n,r,c,sum=0,multi=1,Asum=0,matsum=0,max,min;
    printf("Acccept dimensions of a n by n matrix ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter element of %d X %d matrix \n",n,n);
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
              scanf("%d",&mat[r][c]);
        }
    }
     for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
              printf("%d",mat[r][c]);
        }
        printf("\n");
    }
//row addition
   /* int x;
    printf("Enter row \n");
    scanf("%d",&x);
    for(c=0;c<n;c++)
    {
        sum+=mat[x][c];
    }
    printf("sum of element in %d row is %d\n",x,sum);

//col addition
    /*int y;
    printf("Enter col\n");
    scanf("%d",&y);
    for(r=0;r<n;r++)
    {
        multi*=mat[r][y];
    }
    printf("multiplication of element in %d col is %d\n",y,multi);

//antidigonal sum

for(r=0;r<n;r++)
    {
       Asum+=mat[r][n-1-r];
    }
printf("Asum of a matrix is %d\n",Asum);

//sum of all elements in a matrix

for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
              matsum+=mat[r][c];
        }
    }
    printf("The sum of all elements of a matrix is %d",matsum);

//Print largest element in the matrix

 max=mat[0][0];
 for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(mat[r][c]>max)
            {
                max=mat[r][c];
            }
        }
    }
    printf("maximum element is %d",max);

//Print smallest element in the matrix
 min=mat[0][0];
 for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(mat[r][c]<min)
            {
                min=mat[r][c];
            }
        }
    }
    printf("minimum element is %d",min);
*/
//Print largest and smallest element of antidiagonal
int x,y;
    printf("Enter row and col \n");
    scanf("%d %d",&x,&y);
    int Amin=mat[x][y],Amax=mat[x][y];
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(mat[r][n-1-r]<Amin)
            {
                min=mat[r][n-1-r];
            }
            if(mat[r][n-1-r]>Amax)
            {
                max=mat[r][n-1-r];
            }
        }
    }

    printf("minimum element is %d",min);
    printf("maximun element is %d",max);
    return 0;
}
