#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        int num_threads = omp_get_num_threads();

        #pragma omp critical
        {
            printf("Hello World from thread %d of %d\n", thread_id, num_threads);
        }
    }

    printf("OpenMP compilation successful!\n");
    return 0;
}
