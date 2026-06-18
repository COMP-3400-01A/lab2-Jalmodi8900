#include <stddef.h> // For NULL

/**
 * TODO: Describe what the function does
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
	if (src1 == NULL || src2 == NULL || src1_cap <= 0) {
        return;
    }

    int i = 0;

    while (i < src1_cap && src1[i] != '\0') {
        i++;
    }

    int j = 0;

    while (i < src1_cap - 1 && src2[j] != '\0') {
        src1[i] = src2[j];
        i++;
        j++;
    }

    src1[i] = '\0';
}

