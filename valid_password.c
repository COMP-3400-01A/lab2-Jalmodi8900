#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false

/**
 * TODO: Describe what the function does
 */
#include <ctype.h>
#include <stdbool.h>

bool valid_password(const char *s) {
if (s == NULL) {
   return false;
}
    int len = 0;
    int lower = 0;
    int upper = 0;

    while (s[len] != '\0') {

        if (islower(s[len])) {
            lower++;
        }
        else if (isupper(s[len])) {
            upper++;
        }
        else if (!isdigit(s[len])) {
            return false;
        }

        len++;
    }

    if (len < 6 || len > 10) {
        return false;
    }

    if (lower < 2 || upper < 2) {
        return false;
    }

    return true;
}
