#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double execution_time;

    start = clock();

    for (int i = 0; i < 100000000; i++) {
    }

    end = clock();

    execution_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Execution Time: %.6f seconds\n", execution_time);

    return 0;
}
