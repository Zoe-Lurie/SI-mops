#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char * string;
    struct node * next;
} * Node;

typedef struct queue{
    Node front;
    Node end;
} * Queue;

Queue create( void){
    Queue new_queue = (Queue) malloc( sizeof( struct queue));
    new_queue -> front = NULL;
    new_queue -> end = NULL;
    return new_queue;
}


void add_element(Queue queue){
    Node element = (Node) malloc( sizeof( struct node));

    char buffer[21];
    fgets( buffer, 21, stdin);
    element -> string = (char *) malloc( strlen( buffer) +1);
    strcpy( element -> string, buffer);

    element -> next = NULL;

    if(queue -> end){
        queue -> end -> next = element;
    }
    else{
        queue -> front = element;
        queue -> end = element;
    }
}
