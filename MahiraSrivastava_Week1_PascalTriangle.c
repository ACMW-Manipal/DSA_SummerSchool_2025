#include <stdio.h>

void printPascalsTriangle(int numRows) {
    int triangle[30][30];  
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
          
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];

            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int numRows = 1;
    printPascalsTriangle(numRows);
    return 0;
}
