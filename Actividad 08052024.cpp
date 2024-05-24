#include <stdio.h>

int contar(int monedas[], int n, int sum) {
    if (sum == 0) {
        return 1;
    }
    if (sum < 0) {
        return 0;
    }
    if (n <= 0) {
        return 0;
    }
    return contar(monedas, n - 1, sum) + contar(monedas, n, sum - monedas[n - 1]);
}

int main() {
    int monedas[] = {1, 2, 3};
    int n = sizeof(monedas) / sizeof(monedas[0]);
    int sum = 5;
    printf("Numero de formas de hacer la suma %d es %d\n", sum, contar(monedas, n, sum));
    return 0;
}

