#include <stdio.h>

int main() {
    int buffer[5];
    int i;

    for (i = 0; i <= 5; i++) {
        buffer[i] = i * 2;  // <-- Array-Überlauf bei i == 5
    }

    return 0;
}