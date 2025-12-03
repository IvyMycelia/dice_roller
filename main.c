#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("Usage:\n\t<executable> [numberOfRolls]"); return -1; }
    if (argc > 2) { printf("Usage:\n\t<executable> [numberOfRolls]"); return -1; }
    int amount = atoi(argv[1]);
    if (!amount || amount < 0) { printf("Usage:\n\t<executable> [numberOfRolls]"); return -1; }
    srand(time(NULL));

    char* B_YELLOW = "\x1b[1;33m";
    char* CYAN = "\x1b[36m";

    int i = 0;
    for (i; i < amount; i++) {
        int ran = (rand() % 6) + 1;
        printf("%sYou rolled..%s\t%d!\n", B_YELLOW, CYAN, ran);
    }
    return 0;
}
