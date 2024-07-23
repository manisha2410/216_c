// C program to multiply two matrices

#include <stdio.h>
#include <stdlib.h>

// Edit MACROs here, according to your Matrix Dimensions for
// mat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2

void mulMat(int mat1[][C1], int mat2[][C2])
{
    int rslt[R1][C2];

    printf("Multiplication of given two matrices is:\n");

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }

            printf("%d\t", rslt[i][j]);
        }

        printf("\n");
    }
}

// Driver code
int main()
{
    // R1 = 4, C1 = 4 and R2 = 4, C2 = 4 (Update these
    // values in MACROs)
    int mat1[R1][C1] = { { 1, 1 },
                         { 2, 2 } };

    int mat2[R2][C2] = { { 1, 1 },
                         { 2, 2 } };


    int res[R1][C2];
 
    for(int i=0;i<R1;i++)
    {
        for(int j=0;j<C2;j++)
        {
            res[i][j]=0;
            for(int k=0;k<R2;k++)
            {
                res[i][j]=mat1[i][k]*mat2[k][j];
            }
            printf("%d \t",res[i][j]);
        }
        printf("\n");
    }
    return 0;
    }

      // Function call
    // mulMat(mat1, mat2);

    


// This code is contributed by Manish Kumar (mkumar2789)
