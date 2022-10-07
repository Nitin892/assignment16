1. Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    int matric1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int matrice2[3][3] = {7, 8, 9, 10, 11, 12, 13, 14, 15};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matric1[i][j] + matrice2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

2. Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 0, 1},
            {2, 1, 1},
            {4, 2, 3}};

    int b[3][3] =
        {
            {1, 1, 2},
            {0, 0, 1},
            {4, 1, 5}};

    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int s = 0;
            for (int k = 0; k < 3; k++)
            {
                s = s + a[i][k] * b[k][j];
            }
            c[i][j]=s;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 0, 1},
            {2, 1, 1},
            {4, 2, 3}};

    //     // {1, 2, 4},
    //     // {0, 1, 2},
    //     // {1, 1, 3}

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}

4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 0, 1},
            {2, 1, 1},
            {4, 2, 0}};

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}

5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 0, 10},
            {2, 1, 1},
            {4, 2, 0}};

    int sum = 0;
    for (int i = 0; i <3; i++)
    {
        for (int j = 2; j >=0; j--)
        {
            if (2-i == j)
            {
                sum += a[i][j];
            }
        }
    }
    printf("%d",sum);

    return 0;
}

6. Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 2, 10},
            {2, 1, 1},
            {4, 2, 9}};

    // for sum of rows
    for (int i = 0; i < 3; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < 3; j++)
        {
            sumRow += a[i][j];
        }
        printf("%d ", sumRow);
    }
    printf("\n");
    // for sum of columns

    for (int i = 0; i < 3; i++)
    {
        int sumColumn = 0;
        for (int j = 0; j < 3; j++)
        {
            sumColumn += a[j][i];
        }
        printf("%d ", sumColumn);
    }

    return 0;
}
7. Write a program in C to print or display the lower triangular of a given matrix.

#include <stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 2, 10},
            {2, 1, 1},
            {4, 2, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main()
{
    int a[3][3] =
        {
            {1, 2, 10},
            {2, 1, 1},
            {4, 2, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter 9 elements ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int count = 0;
    int nonzero=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            if (a[i][j] == 0)
                count++;
            else nonzero++;
        }
        printf("\n");
    }
    if(count>nonzero) printf("It is a sparse matrix");
    else printf("It is not a sparse matrix");

    return 0;
}

10. Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>
int main()
{
    int a[3][3];
    printf("Enter 9 elements ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    int previous = 0;
    int max = -1;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
            }
        }
        if (previous < count)
        {
            previous = count;
            max = i;
        }
        count = 0;
    }

    printf("%d", max);
    return 0;
}
