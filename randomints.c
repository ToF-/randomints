#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>
#include <assert.h>

int main(int argc, char *argv[]) {
    char c;
    int start = 0;
    int end = 10000;
    while((c = getopt(argc, argv, "s:e:h")) != -1) {
        switch(c) {
            case 'h': printf("randomints -s <min> -e <max>\n");
                      exit(0);
            case 's': start = atoi(optarg); break;
            case 'e': end = atoi(optarg); break;
        }
    }
    int range = end - start;
    srand(time(NULL));
    while(true) {
        int n = rand() % range + start;
        printf("%d\n", n);
    }
}
