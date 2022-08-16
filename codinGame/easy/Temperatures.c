#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // the number of temperatures to analyse
    int n;
    scanf("%d", &n);
    int *result = NULL;
    int current_val = 0;
    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        fprintf(stderr, "Debug messages... %d\n", t);
        if(result == NULL){
            result = malloc(sizeof(int));
            (*result) = t;
            if(t < 0){
                current_val = t*-1;
            } else {
                current_val=t;
            }
        } else if (t < 0 && (t*-1) < current_val) {
            fprintf(stderr, "Debug messages... %d %d\n", t, current_val);
            *result = t;
            current_val = t*-1;
        } else if (t > 0 && t <= current_val){
            *result = t;
            current_val = t;
        } 
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    if(result == NULL){
        printf("0\n");
    } else {
        printf("%d\n", *result);
        free(result);
    }

    return 0;
}
