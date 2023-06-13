#include<stdio.h>
#include<stdint.h>
#include<string.h>

void main()
{
//    char a[40];
// 	char b[] = "SIEMENS";
// 	char c[40];
//     int x;
//     int loc = 3, len = (strlen(b)+strlen(a));
//    printf("Enter string\n");
//    scanf("%s",a);
//    for(int i=loc;i<=len;i++)
//    {
//         x = a[i];
//         strcat
//    }

int a = 9,b = 2,c = 2,sum;
sum = a/b*c;
printf("%d",sum);

}


// //circular buffer test 
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct {
//     int *buffer;        // Pointer to array of data
//     int head;           // Index of the head of the buffer
//     int tail;           // Index of the tail of the buffer
//     int size;           // Current number of items in the buffer
//     int capacity;       // Maximum capacity of the buffer
// } circular_buffer_t;

// // Create a new circular buffer with the given capacity
// circular_buffer_t *create_circular_buffer(int capacity) {
//     circular_buffer_t *cb = malloc(sizeof(circular_buffer_t));
//     cb->buffer = malloc(capacity * sizeof(int));
//     cb->head = 0;
//     cb->tail = 0;
//     cb->size = 0;
//     cb->capacity = capacity;
//     return cb;
// }

// // Free the memory associated with a circular buffer
// void free_circular_buffer(circular_buffer_t *cb) {
//     free(cb->buffer);
//     free(cb);
// }

// // Add an item to the circular buffer
// void circular_buffer_add(circular_buffer_t *cb, int value) {
//     cb->buffer[cb->tail] = value;
//     cb->tail = (cb->tail + 1) % cb->capacity;
//     if (cb->size == cb->capacity) {
//             cb->tail = (cb->head + 1) % cb->capacity;
//     } else {
//         cb->size++;
//     }
// }

// // Remove the oldest item from the circular buffer and return it
// int circular_buffer_remove(circular_buffer_t *cb)
// {
//     if (cb->size == 0) {
//         fprintf(stderr, "Error: buffer is empty\n");
//         exit(1);
//     }
//     int value = cb->buffer[cb->head];
//     cb->head = (cb->head + 1) % cb->capacity;
//     cb->size--;
//     return value;
// }

// // Print the contents of the circular buffer
// void circular_buffer_print(circular_buffer_t *cb) {
//     printf("Circular Buffer: ");
//     int i;
//     for (i = 0; i < cb->size; i++) {
//         int index = (cb->head + i) % cb->capacity;
//         printf("%d ", cb->buffer[index]);
//     }
//     printf("\n");
// }

// int main() {
//     circular_buffer_t *cb = create_circular_buffer(5);
//     circular_buffer_add(cb, 1);
//     circular_buffer_add(cb, 2);
//     circular_buffer_add(cb, 3);
//     circular_buffer_add(cb, 4);
//     circular_buffer_add(cb, 5);
//    //  circular_buffer_print(cb);  // should print "Circular Buffer: 1 2 3"
//    //  printf("Removed %d from buffer\n", circular_buffer_remove(cb));  // should print "Removed 1 from buffer"
//     circular_buffer_add(cb, 6);
//    //  circular_buffer_add(cb, 7);
//    //  circular_buffer_add(cb, 8);
//    circular_buffer_remove(cb);
//    circular_buffer_remove(cb);
//    circular_buffer_remove(cb);
//    circular_buffer_remove(cb);
//    circular_buffer_remove(cb);
//    circular_buffer_remove(cb);
//     circular_buffer_print(cb);  // should print "Circular Buffer: 2 3 4 5 6"
//     free_circular_buffer(cb);
//     return 0;
// }
