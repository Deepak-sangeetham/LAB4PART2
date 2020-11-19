/* Modify programming project 7 so that it prompts for five quiz grades for each of five students,
    then computes the total score and average score foe each student, and the average score, high scoe and low score for each quiz:
*/

#include <stdio.h>

int main()
{
    int i, j, total, high, low;
    int A[5][5];

    for (i = 0; i < 5; i++){
        printf("Enter quiz grades for student %d : ", i + 1);

        for(j = 0; j < 5; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("\nTotal and average score for student %d : ", i + 1);
        total = 0;
        for(j = 0; j < 5; j++){
            total += A[i][j];
        }
       // printf("%d %.2f", total, (double) total / 5);
    }

    printf("\n");
    for(i = 0; i < 5; i++){
        printf("\nAverage, high and low scores for quiz %d : ", i + 1);
        total = 0;
        high = low = A[0][i];

        for(j = 0; j < 5; j++){
            total += A[j][i];
            
            if(A[j][i] < low)
                low = A[j][i];
            if(A[j][i] > high)
                high = A[j][i];
        }

        printf("%.2f, %d, %d", (double) total/5, high, low);

    }
    printf("\n");

    return 0;

}

