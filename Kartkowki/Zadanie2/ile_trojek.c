/* Napisz funkcję ile_trojek, która jaka ilość
potęg trójki występuje w rozkładzie liczby n!
na czynniki pierwsze. Możesz korzystać z funkcji
div i mod, które wyznaczają odpowiednio wynik
i resztę z dzielenia. Uzasadnij rozwiązanie. */

#include <stdio.h>

int ile_trojek(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", ile_trojek(n));
    return 0;
}

int ile_trojek(int n) {
    int m, result;
    result = 0;
    m = 1;
    while (m <= n) {
        m *= 3;
    }
    while (m >= 3) {
        result += n / m;
        m /= 3;
    }
    return result;
}