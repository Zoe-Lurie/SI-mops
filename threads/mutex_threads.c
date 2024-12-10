#define _DEFAULT_SOURCE   // for usleep
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 10

static pthread_mutex_t m_lock;

void * thread_run(void *param) {
    long thread_num = (long)param;

    pthread_mutex_lock(&m_lock);
    for(long i = 0; i < thread_num; i++) {
        usleep(100);
        putc('t', stdout);
    }

    printf("\n");
    pthread_mutex_unlock(&m_lock);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_ids[NUM_THREADS];
    printf("Hello from main thread\n");

    pthread_mutex_init(&m_lock, NULL);

    // Start up all threads
    for(long i = 0; i < NUM_THREADS; i++)
        pthread_create(&thread_ids[i], NULL, thread_run, (void *)i);

    // Join all threads
    for(int i = 0; i < NUM_THREADS; i++) {
        pthread_join(thread_ids[i], NULL);
    }

    pthread_mutex_destroy(&m_lock);

    return 0;
}
