#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int MAX_SIZE_ARRAY = 10;

int main()
{

    unsigned long A[MAX_SIZE_ARRAY];

    int sum = 1;
    A[0] = sum ;
    printf("A[i] = %lu\n", A[0]);
    for (int i =1 ; i < MAX_SIZE_ARRAY; i++){
        sum*= 15;
        A[i] = sum+ (50 * i) + (i & 3);
        printf("A[i] = %lu\n", A[i]);
    }

    return 0;
}
