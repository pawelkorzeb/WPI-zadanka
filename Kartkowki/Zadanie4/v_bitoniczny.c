#include <stdio.h>

#define n 9

int main(void) {
    int j, A[n] = {10, 2, 8, 7, 6, 2, 4, 5, 6};
    for (j = 0; j+1 < n && A[j] >= A[j+1]; ++j)
        ;
    for (; j+1 < n && A[j] <= A[j+1]; ++j)
        ;
    printf((j+1 == n) ? "TAK\n" : "NIE\n");
    return 0;
}

//dziala dla n >= 1, wg zadania n chyba nie bedzie rowne 0