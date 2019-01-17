/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

void main()
{
    int matrix[100][100] = {{0}};
    
    /*Iterating over rows first, then columns.*/
    clock_t start = clock();
    for (int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            matrix[i][j] *=1;
        }
    }
    double time_row_major = (double)(clock()-start);
    printf("Row-major order, elapsed time: %d \n", time_row_major);
    

    /*Iterating over columns first, then rows.*/
    start = clock();
    for (int i = 0; i<100; i++){
        for (int j = 0; j<100; j++){
            matrix[j][i] *=1;
        }
    }
    double time_column_major = (double)(clock()-start);
    printf("Column-major order, elapsed time: %d \n", time_column_major);
    
    
    /*Comparing the the order of the iterations.*/
    if (time_column_major < time_row_major){
        printf("Row-major is quicker then column-major.");
    }
    else{
        printf("Column-major is quicker then row-major.");
    }

}
