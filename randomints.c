#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <assert.h>

int main(int argc, char *argv[]) {
    int range = 10000;
    srand(time(NULL));
    while(true) {
        int n = rand() % range;
        printf("%d\n", n);
    }
}
