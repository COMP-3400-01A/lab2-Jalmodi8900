#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
void string_fill(char dest[], int dest_cap, char c) {
	if (dest == NULL) {
	    return;
	}
	int i;
	for (i = 0; i < dest_cap - 1; i++) {
		dest[i] = c;
	}
	if (dest_cap > 0) {
	    dest[i] = '\0';
	}
}
