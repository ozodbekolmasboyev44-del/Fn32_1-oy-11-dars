

#include <stdio.h>

int main() {
    int i=1;
   for (i = 1; i <= 15; i++) {
        if (i == 5) {
            printf("Besh\n");
        } else {
            printf("%d - %d\n", i, i * i);
        }
    }
    return 0;
}