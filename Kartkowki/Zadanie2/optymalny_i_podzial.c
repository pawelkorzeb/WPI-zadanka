/* Dana jest tablica int tab[N]; wypełniona
liczbami 0 i 1. Dla liczby 0 <= i < N
definiujemy wartość i-podziału tablicy
w następujący sposób:
    liczba zer w tablicy na indeksach od
    0 do i włącznie + liczba jedynek na 
    pozycjach od i+1 do N-1
    
    Powiemy, że i-podział jest optymalny jeśli
    dla każdego 0 <= j < N zachodzi, że 
    wartość i-podziału jest większa równa
    niż wartość j-podziału.
Napisz program wyznaczający i */

#include <stdio.h>

int optymalny_i_podzial(int a[], int n);

int main(void) {
    int n = 10;
    int a[10] = {0,1,1,0,1,0,0,0,1,1};
    printf("%d\n", optymalny_i_podzial(a, n));
    return 0;
}

int optymalny_i_podzial(int a[], int n) {
    int i, j, akt, maks;
    maks = akt = 0;
    for (i = 0; i < n; ++i, akt = 0) {
        for (j = 0; j < n; ++j) {
            if (j <= i && a[j] == 0)
                ++akt;
            else if (j > i && a[j] == 1)
                ++akt;
        }
        if (akt > maks)
            maks = akt;
    }
    return maks;
}