#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// FILL IN THE BODY OF THIS FUNCTION.
// Feel free to create any other functions you like; just include them in this file.
void repr_convert(char source_repr, char target_repr, unsigned int repr) {
}

// DO NOT CHANGE ANY CODE BELOW THIS LINE
int main(int argc, char *argv[]) {
    (void)argc; // Suppress compiler warning
    (void)argv;
    repr_convert(argv[1][0], argv[2][0], (int)strtol(argv[3], NULL, 16));
    return 0;
}
