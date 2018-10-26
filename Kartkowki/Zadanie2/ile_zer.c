/* Napisz funkcję ile_zer, która obliczy iloma zerami
kończy się liczba n! Możesz korzystać z funkcji
div i mod, które wyznaczają odpowiednio wynik
i resztę z dzielenia. Uzasadnij rozwiązanie. */

#include <stdio.h>

int ile_zer(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", ile_zer(n));
    return 0;
}

int ile_zer(int n) {
    int m, result;
    result = 0;
    m = 1;
    while (m <= n) {
        m *= 5;
    }
    while (m >= 5) {
        result += n / m;
        m /= 5;
    }
    return result;
}