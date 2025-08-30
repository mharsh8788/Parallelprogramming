#include <stdio.h>
#include <omp.h>

int main() {
    int n = 4;

     

    
    printf("\n--- Sequential Hello, World ---\n");
    for(int i = 0; i < n; i++) {
        printf("Hello, World! Sequential %d\n", i+1);
    }

    
    printf("\n--- Parallel Hello, World ---\n");
    omp_set_num_threads(n);
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        printf("Hello, World! Parallel from thread %d\n", tid);
    }

    return 0;
}
