/*
//C program for multiplication of two matrices
#include <stdio.h>

int main() {
    int  a[5][5], b[5][5], m[5][5], i, j, x, r1, c1, r2, c2, sum = 0;
    printf("Enter the rows and columns of the first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns of the second matrix: \n");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) 
    {
        printf("Not a square matrix.\n");
    } 
    else
    {
        printf("Enter the elements in the first matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++) {
                scanf("%d", & a[i][j]);
            }
        }
        printf("Enter the elements in the second matrix:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nThe First matrix:\n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t",  a[i][j]);
            }
        printf("\n");
        }
        printf("The Second matrix:\n");
        for (i = 0; i < r2; i++) 
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r1; i++) 
        { 
            for (j = 0; j < c2; j++) 
            {
                sum = 0;
                for (x = 0; x < c1; x++)
                    sum = sum + a[i][x] * b[x][j];
                m[i][j] = sum;
            }
        }
        printf("Answer \n");
        for (i = 0; i < r1; i++) 
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/
//2 ======================================================================================================
//Write a program in C to find the sum of rows and columns of a matrix.
/*
#include <stdio.h>

int main() {
    int i, j, k, a[5][5], rsum[10], csum[10],r,c;
    printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) {
                scanf("%d", & a[i][j]);
            }
        }
    for (i = 0; i < r; i++) 
    {
        rsum[i] = 0;
        for (j = 0; j < c; j++) 
        {
            rsum[i] = rsum[i] + a[i][j];
        }
    }
    for (i = 0; i < r; i++) 
    {
        csum[i] = 0;
        for (j = 0; j < c; j++) 
        {
            csum[i] = csum[i] + a[j][i];
        }
    }
for (i = 0; i < r; i++)
{
    printf("The sum of row %d: %d",i+1,rsum[i])
}
for (i = 0; i < c; i++)
{
    printf("The sum of column %d: %d",i+1,csum[i])
}
    return 0;
}*/
//3 ==================================================================================================
/*
// Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main() {
    int a[10][10], i, j, r, c;
     printf("Enter the rows and columns: \n");
    scanf("%d %d", &r, &c);
    printf("Enter the array");
    for (i = 0; i < r; i++) 
        {
            for (j = 0; j < c; j++) {
                scanf("%d", & a[i][j]);
            }
        }
    printf("The matrix is :\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("Upper triangular matrix\n");
    for (i = 0; i < r; i++) {
        printf("\n");
        for (j = 0; j < c; j++) {
            if (i >= j) {
                printf("%d", a[i][j]);
            } else {
                printf("%d", 0);
            }
        }
    }
    return 0;
}*/
//4 =================================================================================================
/*
//Write a program in C to accept two matrices and check whether they are equal.
#include <stdio.h>

int main() {
    int  a[10][10], b[10][10], i, j, x, r1, c1, r2, c2, flag=1;
    printf("Enter the rows and columns of the first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the rows and columns of the second matrix: \n");
    scanf("%d %d", &r2, &c2);
    if(r1 == r2 && c1 == c2) {
        printf("The Matrices can be compared : \n");
        for(i = 0; i < r1; i++) {
            for(j = 0; j < c2; j++) {
                if(a[i][j] != b[i][j]) {
                    flag = 0;
                    break;
                }
            }
        }
    } else 
    {
        printf("The Matrices Cannot be compared :\n");
    }
    if(flag == 1)
        printf("Two matrices are equal.\n");
    else
        printf("But, two matrices are not equal.\n");
    return 0;
}*/
//5 =================================================================================================
/*
#include <stdio.h>
int main ()
{
  int a[10][10] r, c,i,j,x,y;
  printf ("Enter the rows and column" :\n);
  scanf ("%d %d", &rows, &columns);
  printf ("Enter the elements:\n");

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf ("%d", &a[i][j]);
    }
  }
 
  i = r - 1;
  j = c - 1;
  x = r - 1;
  y = c - 1;
  int s = Sum (i, j, r, c, a, x, y);
  printf ("The sum of elements : %d", s);
    return 0;
}

int Sum (int i, int j, int r, int c, int a[10][10], int x,int y)
{


  if ((i == 0) && (j == 0))
    return a[i][j];	// condition 3

  if (j == 0)
    return a[i][j] + Sum (i - 1, y, r, c, matrix, x, y);

  else
    return a[i][j] + Sum (i, j - 1, r, c, matrix, x, y);

}*/
