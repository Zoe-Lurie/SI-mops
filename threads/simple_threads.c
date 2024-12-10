#define _DEFAULT_SOURCE   // for usleep
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_THREADS 10

void * thread_run(void * param) {
    long thread_num = (long)param;

    for(long i = 0; i < thread_num; i++) {
        usleep(100);
        putc('t', stdout);
    }

    printf("\n");
    //printf("%ld\n", thread_num);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_ids[NUM_THREADS];
    printf("Hello from main thread\n");

    for(long i = 0; i < NUM_THREADS; i++)
        pthread_create(&thread_ids[i], NULL, thread_run, (void *)i);

    for(int i = 0; i < NUM_THREADS; i++) {
        void *return_value;
        pthread_join(thread_ids[i], &return_value);
    }

    return 0;
}

