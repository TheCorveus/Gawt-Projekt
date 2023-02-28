#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int data[100];
    int i;


    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        data[i] = rand() % 100;
    }

    FILE *fp;
    fp = fopen("data.csv", "w");
    for (i = 0; i < 100; i++) {
        fprintf(fp, "%d \n", data[i]);
    }

    fclose(fp);

    return 0;
}