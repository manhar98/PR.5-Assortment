#include <stdio.h>

int main(){

    // printf("Q-1 Negative Elements in 1D Array.\n");

    // int a[100], n, i;
    
    // printf("Enter the array's size: ");
    // scanf("%d", &n);

    // printf("\nEnter array's elemants: \n");
    // for (i = 0; i < n; i++){
    //     printf("a[%d] = ", i);
    //     scanf("%d", &a[i]);
    // }

    // printf("\nNegative elements from an Array: ");
    // for (i = 0;i < n; i++){
    //     if(a[i] < 0){
    //         printf("%d ", a[i]);
    //     }
    // }


    // printf("\nQ-2 Largest Elements in 2D Array.\n");

    // int r, c, j, k, max = 0;

    // printf("Enter the array's row size: ");
    // scanf("%d", &r);
    // printf("Enter the array's column size: ");
    // scanf("%d", &c);

    // int box[r][c];

    // printf("\nEnter array's elements\n");
    // for(j = 0; j < r; j++){
    //     for(k = 0; k < c; k++){
    //         printf("box[%d][%d] = ",j ,k);
    //         scanf("%d", &box[j][k]);
    //     }
    // }

    // for(j = 0; j < r; j++){
    //     for(k = 0; k < c; k++){
    //         if(box[j][k] > max){
    //             max = box[j][k];
    //         }
    //     }
    // }
    // printf("The largest element is: %d", max);



    // printf("\nQ-3 Transpose of 2D Array.\n");

    // int rowCol, x, y;

    // printf("\nEnter the array's row & column size: ");
    // scanf("%d", &rowCol);

    // int a[rowCol][rowCol];

    // printf("\nEnter Array's elements: \n");
    // for (x = 0; x < rowCol; x++){
    //     for(y = 0; y < rowCol; y++){
    //         printf("x[%d][%d] = ", x, y);
    //         scanf("%d", &a[x][y]);
    //     }
    // }

    // printf("\nThe transpose matrix of an array:\n");
    // for (x = 0; x < rowCol; x++){
    //     for (y = 0; y < rowCol; y++){
    //         printf("%d ", a[x][y]);
    //     }
    //     printf("\n");
    // }



    printf("Q-4 Sum of Elements in Row & Column of 2D Array.\n");

    int r, c, i, j;
    int row, col, sumRow = 0, sumCol = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter array's elements: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("a[r][c] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nEnter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for (j = 0; j < c; j++){
        printf("%d ", a[row][j]);
        sumRow += a[row][j];
    }

    printf("\nThe sum of row %d: %d\n", row , sumRow);

    printf("\nenter column number: ");
    scanf("%d", &col);

    printf("Elements of column %d: ", col);
    for (i = 0; i < r; i++){
        printf("%d ",a[i][col]);
        sumCol += a[i][col];
    }

    printf("\n The sum of col %d: %d\n", col, sumCol);
}