/* W tablicy A[n] znajdują się tylko zera lub jedynki.
Napisz fragment programu, któr zmiennej Ile01 nada
wartość |{i,j} : i < j, A[i]=0 < A[j]=1}| */

#include <stdio.h>

int pary_ile(int a[], int n);

int main(void) {
    int n = 10;
    int a[10] = {0,1,1,0,1,0,0,0,1,1};
    printf("%d\n", pary_ile(a, n));
    return 0;
}

int pary_ile(int a[], int n) {
    int i, j, result;
    result = 0;
    for (i = 0; i < n; ++i)
        if (a[i] == 0)
            for (j = i + 1; j < n; ++j)
                if (a[j] == 1)
                    ++result;
    return result;
}
