#include <stdio.h>

#define n 12

int main(void) {
    int i, j, k=3, m=0, A[n] = {1,1,0,0,0,2,3,4,6,6,6,6};
    for (i = 0; i < n-k && i < n-m; ++i) {
        for (j = i+1; j < n && A[i] == A[j]; ++j)
            ;
        j -= i;
        m = (j > k && j > m) ? j : m;
    }
    printf("%d\n", m);
    return 0;
}

//Nie wiem zbytnio jak wyznaczyć liczbe operacji