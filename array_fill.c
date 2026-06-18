#include <stddef.h> // For NULL


/**
 * TODO: Describe what the function does
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if (array ==NULL || array_len <= 0) {
	return 0;
     }

int count =0;

for (int i = 0; i < array_len  && begin <= end; i++) {
    array[i] = begin;
    begin++;
    count++;
    } 

return count;
}
