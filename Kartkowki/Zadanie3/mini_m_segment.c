/* Napisz fragment programu, który dla tablicy A[n]
oraz stałej m takiej, że 0 <= m < n znajdzie segment 
długości m o minimalnej sumie i wartość tej sumy
wypisze na standardowe wyjście. Podaj dokładną liczbę
operacji arytmetycznych, które Twój algorytm wykona */

#include <stdio.h>

int mini_m_segment(int a[], int n, int m);

int main(void) {
    int m;
    int a[15] = {2,1,10,4,3,6,6,2,4,1,2,0,3,2,5};
    scanf("%d", &m);
    printf("%d\n", mini_m_segment(a, 15, m));
    return 0;
}

int mini_m_segment(int a[], int n, int m) {
    int i, j, akt, mini;
    akt = 0;
    for (i = 0; i + m < n; ++i, akt = 0) {
        for (j = i; j < i+m; ++j)
            akt += a[j];
        if (!mini || akt < mini)
            mini = akt;
    }
    return mini;
}